#include <stdio.h>

int main() {
    int choice;
    float temperature, convertedTemperature;

    printf("Temperature Conversion Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temperature);
            convertedTemperature = (temperature * 9/5) + 32;
            printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit\n", temperature, convertedTemperature);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            convertedTemperature = (temperature - 32) * 5/9;
            printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius\n", temperature, convertedTemperature);
            break;
        default:
            printf("Invalid choice. Please select 1 or 2.\n");
            break;
    }

    return 0;
}
