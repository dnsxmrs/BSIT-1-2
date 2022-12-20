#include<stdio.h>

main () {
    float num1, num2;

    printf("Enter your first number: ");
    scanf("%f", &num1);
    printf("Enter your second number: ");
    scanf("%f", &num2);

    printf("\nThe sum of %.2f and %.2f is %.2f.\n", num1, num2, num1+num2);
    printf("The difference of %.2f and %.2f is %.2f.\n", num1, num2, num1-num2);
    printf("The product of %.2f and %.2f is %.2f.\n", num1, num2, num1*num2);
    printf("The quotient of %.2f and %.2f is %.2f.", num1, num2, num1/num2);
}