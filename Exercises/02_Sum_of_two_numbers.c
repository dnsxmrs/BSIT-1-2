#include<stdio.h>
    /// int main or main is fine
main () {
    /// change float to int or int to float
    float num1, num2;

    printf("Enter your first number: ");
    scanf("%f", &num1);
    printf("Enter your second number: ");
    scanf("%f", &num2);
    /// you can change the output display
    printf("The sum of %.2f and %.2f is %.2f.", num1, num2, num1+num2);
}