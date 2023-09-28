#include <stdio.h>

int main() {
    int age;
    char hasLicense, hasCar;

    printf("Day 11: Logical Operators in Action!\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have a driver's license? (y/n): ");
    scanf(" %c", &hasLicense);

    printf("Do you have a car? (y/n): ");
    scanf(" %c", &hasCar);

    // Using logical operators to make decisions
    if (age >= 18 && (hasLicense == 'y' || hasCar == 'y')) {
        printf("You are eligible to drive.\n");
    } else if (age < 18 && hasLicense == 'y') {
        printf("You can't drive legally yet, but you have a license.\n");
    } else if (age >= 18 && (hasLicense == 'n' && hasCar == 'n')) {
        printf("You are eligible to drive, but you need a license or a car.\n");
    } else {
        printf("You are not eligible to drive.\n");
    }

    return 0;
}
