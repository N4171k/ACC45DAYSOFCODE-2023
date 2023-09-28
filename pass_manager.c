#include <stdio.h>

int main() {
    int max_credentials = 100; 
    int max_string_length = 100; 
    
    char websites[max_credentials][max_string_length];
    char usernames[max_credentials][max_string_length];
    char passwords[max_credentials][max_string_length];
    int num_credentials = 0;

    printf("Simple Password Manager\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add Credentials\n");
        printf("2. View Credentials\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (num_credentials < max_credentials) {
                    printf("Enter website: ");
                    scanf("%s", websites[num_credentials]);
                    printf("Enter username: ");
                    scanf("%s", usernames[num_credentials]);
                    printf("Enter password: ");
                    scanf("%s", passwords[num_credentials]);
                    num_credentials++;
                    printf("Credentials added successfully!\n");
                } else {
                    printf("Maximum number of credentials reached.\n");
                }
                break;
            case 2:
                printf("Stored Credentials:\n");
                for (int i = 0; i < num_credentials; i++) {
                    printf("Website: %s\n", websites[i]);
                    printf("Username: %s\n", usernames[i]);
                    printf("Password: %s\n", passwords[i]);
                    printf("\n");
                }
                break;
            case 3:
                printf("Exiting Password Manager.\n");
                return 0;
            default:
                printf("Invalid selection. Please try again.\n");
        }
    }

    return 0;
}
