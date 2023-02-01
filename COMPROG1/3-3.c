//    The factorial of an integer number is the product of the number and the numbers below it until 1. 
//    Create a program to display the factorial of an input integer number.  5! = 1x2x3x4x5
#include<stdio.h>

main () {
    int n, x, f=1, i;
    
    printf("Let's find the factorial of an integer.\n");
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        f = f * x;
    }
    
    printf("\n%d! = ", n);
    for (i = 1; i <= n; i++) {
        printf("(%d)", i);
    }    
    printf("\nThe factorial of %d is %d.", n, f);
}