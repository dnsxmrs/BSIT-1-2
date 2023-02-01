#include<stdio.h>
#include<math.h>

main () {
    double p, t, r, ci;

    printf("Let's calculate the compound interest.\n");
    printf("What is the principal balance? ");
    scanf("%lf", &p);
    printf("What is the time(in years)? ");
    scanf("%lf", &t);
    printf("What is the annual interest rate? ");
    scanf("%lf", &r); 

    ci = p * pow(1 + (r/100), 2);

    printf("The compound intest is %.4lf.", ci);
}