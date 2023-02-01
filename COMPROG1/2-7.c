/* Create a program that will input two integer numbers and the operator
(+, -, * and /).  Use a switch-case statement to get the output
of the input operator.  Display the appropriate results. */
#include<stdio.h>

int main () {
    int num1, num2, res;
    char op;

    printf("Enter the first digit: ");
    scanf("%d", &num1);
    printf("Enter the operation to be used(+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter the second digit: ");
    scanf("%d", &num2);
    
    printf("\nCalculating...");

    res = 0;

    switch (op) {
    case '+' :
        res = num1 + num2;
        break;
    case '-' :
        res = num1 - num2;
        break;
    case '*' :
        res = num1 * num2;
        break;
    case '/' :
        res = num1 / num2;
        break;
    default:
        printf("Try again.");
        break;
    }

    printf("\n\n%d %c %d = %d", num1, op, num2, res);

    return 0;
}