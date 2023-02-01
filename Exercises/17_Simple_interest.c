#include<stdio.h>

main () {
    float p, t, r, si;

    printf("Let's calculate the simple interest.\n");
    printf("What is the principal balance? ");
    scanf("%f", &p);
    printf("What is the time(in years)? ");
    scanf("%f", &t);
    printf("What is the annual interest rate? ");
    scanf("%f", &r); 

    si = (p * t * r) / 100;

    printf("The simple intest is %.2f.", si);
}