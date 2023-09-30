#include <stdio.h>

struct Expense {
    char category[50];
    float amount;
};

void addExpense(struct Expense expenses[], int *count) {
    if (*count >= 100) {
        printf("Expense tracker is full. Cannot add more expenses.\n");
        return;
    }

    printf("Enter the category: ");
    scanf("%s", expenses[*count].category);

    printf("Enter the amount: ");
    scanf("%f", &expenses[*count].amount);

    (*count)++;
    printf("Expense added successfully.\n");
}

void viewExpenses(struct Expense expenses[], int count) {
    printf("Category\tAmount\n");
    for (int i = 0; i < count; i++) {
        printf("%s\t\t%.2f\n", expenses[i].category, expenses[i].amount);
    }
}

int main() {
    struct Expense expenses[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\nExpense Tracker Menu:\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addExpense(expenses, &count);
                break;
            case 2:
                viewExpenses(expenses, count);
                break;
            case 3:
                printf("Exiting Expense Tracker. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
