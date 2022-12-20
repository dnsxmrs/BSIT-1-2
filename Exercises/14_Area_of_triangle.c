#include<stdio.h>

main () {
    float b, h, a;

    printf("Let's find the area a triangle given the base and height.\n");
    printf("What is the base of the triangle? ");
    scanf("%f", &b);
    printf("What is the height of the triangle? ");
    scanf("%f", &h);
   
    a = (b * h) / 2;

    printf("The area of the triangle is %.2f sq. units.\n", a);
}