
#include <stdio.h>

int main() {
    double num1, num2;
    char operator;
    double result;

    printf("Simple Calculator in C (using if-else)\n");
    printf("---------------------------------------\n");

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Notice the space before %c

    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operator.\n");
    }

    return 0;
}
