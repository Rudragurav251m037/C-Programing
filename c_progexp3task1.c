// Rudra Gurav
// FE Mechanical 
//251M037
#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

MENU:   // Label for goto
    printf("\n====== MENU DRIVEN CALCULATOR ======\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            result = a + b;
            printf("Result = %.2f\n", result);
            goto MENU;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            result = a - b;
            printf("Result = %.2f\n", result);
            goto MENU;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            result = a * b;
            printf("Result = %.2f\n", result);
            goto MENU;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if (b == 0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                result = a / b;
                printf("Result = %.2f\n", result);
            }
            goto MENU;

        case 5:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
            goto MENU;
    }

    return 0;
}