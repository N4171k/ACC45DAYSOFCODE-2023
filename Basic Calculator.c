#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    while (1) {
        printf("Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Quit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You selected 'Add'. Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %lf\n", num1 + num2);
                break;
            case 2:
                printf("You selected 'Subtract'. Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %lf\n", num1 - num2);
                break;
            case 3:
                printf("You selected 'Multiply'. Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %lf\n", num1 * num2);
                break;
            case 4:
                printf("You selected 'Divide'. Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("Result: %lf\n", num1 / num2);
                }
                break;
            case 5:
                printf("Exiting the program. Goodbye! do not forget to follow me on socials at https://www.linkedin.com/in/iamnaitik/ \n");
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option (1-5).\n");
        }
    }

    return 0;
}
