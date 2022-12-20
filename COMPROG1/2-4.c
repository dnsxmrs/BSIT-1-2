/* Create a program that will enter three integer values.
Display the smallest and the largest values among the input numbers. */
#include<stdio.h>

main () {
    int a, b, c;

    printf("Enter the first integer value: ");
    scanf("%d", &a);
    printf("Enter the second integer value: ");
    scanf("%d", &b);
    printf("Enter the third integer value: ");
    scanf("%d", &c);

    if ((a < b) && (a < c))
        printf("\n%d is the smallest number.\n", a);
    else if (b < c)
        printf("\n%d is the smallest number.\n", b);
    else 
        printf("\n%d is the smallest number.\n", c);

    if ((a > b) && (a > c))
        printf("%d is the largest number.", a);
    else if (b > c)
        printf("%d is the largest number.", b);
    else
        printf("%d is the largest number.", c);
}