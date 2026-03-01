#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1, num2, k = 1;
    char op;

    while (k != 0) {
        printf("Enter first number: ");
        scanf("%d", &num1);

        printf("Enter second number: ");
        scanf("%d", &num2);

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op); 

        switch (op) {
            case '+':
                printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0) {
                    printf("Result: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                } else {
                    printf("Error: DIVISION BY ZERO!!\n");
                }
                break;
            default:
                printf("Error: Invalid operator\n");
        }
        
        printf("Calculator: Press 0 to exit, any other number to continue: ");
        scanf("%d", &k);
    }

    return EXIT_SUCCESS;
}
