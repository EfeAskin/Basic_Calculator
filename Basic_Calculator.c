#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Fonksiyon prototipleri
double toplama(double a, double b);
double cikarma(double a, double b);
double carpma(double a, double b);
double bolme(double a, double b);
void menu_goster();

int main() {
    double num1, num2;
    char op;
    int devam = 1;

    printf("=== Advanced C Calculator ===\n");

    while (devam) {

        menu_goster();

        printf("Enter first number: ");
        while (scanf("%lf", &num1) != 1) {
            printf("Invalid input. Please enter a number: ");
            while (getchar() != '\n');
        }

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);

        printf("Enter second number: ");
        while (scanf("%lf", &num2) != 1) {
            printf("Invalid input. Please enter a number: ");
            while (getchar() != '\n');
        }

        switch (op) {
            case '+':
                printf("Result: %.2lf\n", toplama(num1, num2));
                break;
            case '-':
                printf("Result: %.2lf\n", cikarma(num1, num2));
                break;
            case '*':
                printf("Result: %.2lf\n", carpma(num1, num2));
                break;
            case '/':
                if (num2 != 0)
                    printf("Result: %.2lf\n", bolme(num1, num2));
                else
                    printf("Error: Division by zero!\n");
                break;
            default:
                printf("Invalid operator!\n");
        }

        printf("\nPress 1 to continue, 0 to exit: ");
        scanf("%d", &devam);
        printf("\n");
    }

    printf("Calculator closed. Goodbye!\n");
    return EXIT_SUCCESS;
}

// Fonksiyon tanımları

double toplama(double a, double b) {
    return a + b;
}

double cikarma(double a, double b) {
    return a - b;
}

double carpma(double a, double b) {
    return a * b;
}

double bolme(double a, double b) {
    return a / b;
}

void menu_goster() {
    printf("\nSelect an operation:\n");
    printf("+  Addition\n");
    printf("-  Subtraction\n");
    printf("*  Multiplication\n");
    printf("/  Division\n\n");
}
