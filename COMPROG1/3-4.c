//    Create a program to determine the factors of an input number.
//    Factors of 10 = 1 2 5 10 Input until value entered is zero or less than zero.
#include<stdio.h>

main () {
    int n, i;

    printf("Let's find the factors of a number.");

    while (n != 0) {
        printf("\n\nEnter a number: ");
        scanf("%d", &n);
        
        if (n!=0) {
            printf("The factors of %d are", n);
            for (i = 1; i <= n; i++){
                if (n % i == 0) 
                    printf(" %d", i);
            }
            printf(".");
        } else {
            printf("You entered a negative number or zero.\n");
            printf("\nThe program has ended!!");
        }
    }
}