#include <stdio.h>

int main() {
    double side1, side2, hypotenuse;

    printf("Welcome to the Pythagorean Theorem Calculator!\n");
    printf("Enter the length of the first side: ");
    scanf("%lf", &side1);
    printf("Enter the length of the second side: ");
    scanf("%lf", &side2);

    
    double side1Squared = side1 * side1;
    double side2Squared = side2 * side2;
    double sumOfSquares = side1Squared + side2Squared;
    hypotenuse = sqrt(sumOfSquares);

    printf("The length of the hypotenuse is: %.2lf\n", hypotenuse);

    return 0;
}
