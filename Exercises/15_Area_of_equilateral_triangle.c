#include<stdio.h>
#include<math.h>

main () {
    double ae, s;

    printf("Let's calculate the area of the equilateral triangle.\n");
    printf("What is the length of the side? ");
    scanf("%lf", &s);
       
    ae = (sqrt(3) / 4) * (s * s);

    printf("The area of the equilateral triangle is %.2lf.\n", ae);
}