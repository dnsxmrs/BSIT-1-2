#include<stdio.h>
#include<math.h>

main () {
    double x, y, p;

    printf("Let's calculate the power of a number.\n");
    printf("What is the base number? ");
    scanf("%lf", &x);
    printf("What is the exponent number? ");
    scanf("%lf", &y);
   
    p = pow(x, y);

    printf("%.2lf raised to %.2lf is %.2lf.\n", x, y, p);
}