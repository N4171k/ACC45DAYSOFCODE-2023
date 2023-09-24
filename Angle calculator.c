#include <stdio.h>

int main() {
    double side1, side2, side3;
    double angle1, angle2, angle3;
    
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%lf", &side1);
    printf("Side 2: ");
    scanf("%lf", &side2);
    printf("Side 3: ");
    scanf("%lf", &side3);


    double cosA = (side2*side2 + side3*side3 - side1*side1) / (2 * side2 * side3);
    double cosB = (side1*side1 + side3*side3 - side2*side2) / (2 * side1 * side3);
    double cosC = (side1*side1 + side2*side2 - side3*side3) / (2 * side1 * side2);


    angle1 = acos(cosA) * 180.0 / 3.14159265;
    angle2 = acos(cosB) * 180.0 / 3.14159265;
    angle3 = acos(cosC) * 180.0 / 3.14159265;

    printf("Angles of the triangle are:\n");
    printf("Angle 1: %.2lf degrees\n", angle1);
    printf("Angle 2: %.2lf degrees\n", angle2);
    printf("Angle 3: %.2lf degrees\n", angle3);

    return 0;
}
