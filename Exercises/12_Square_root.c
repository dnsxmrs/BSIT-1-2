#include<stdio.h>
#include<math.h>

main () {
    double x, s;

    printf("Let's calculate the square root of a number.\n");
    printf("What is the number? ");
    scanf("%lf", &x);
    
    s = sqrt(x);

    printf("The square root of %.2lf is %.2lf.\n", x, s);
}