#include <stdio.h>

int main() {
    int operand1, operand2;
    char operator;

    printf("Enter first operand: ");
    scanf("%d", &operand1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); 

    printf("Enter second operand: ");
    scanf("%d", &operand2);

    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", operand1, operand2, operand1 + operand2);
            break;
        case '-':
            printf("%d - %d = %d\n", operand1, operand2, operand1 - operand2);
            break;
        case '*':
            printf("%d * %d = %d\n", operand1, operand2, operand1 * operand2);
            break;
        case '/':
            if (operand2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%d / %d = %d\n", operand1, operand2, operand1 / operand2);
            }
            break;
        case '%':
            if (operand2 == 0) {
                printf("Error: Modulo by zero\n");
            } else {
                printf("%d %% %d = %d\n", operand1, operand2, operand1 % operand2);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}