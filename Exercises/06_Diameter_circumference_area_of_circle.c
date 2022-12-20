#include<stdio.h>

int main () {
    float r, d, c, a;
    const float pi = 3.14;
    
    printf("Let's find the diameter, circumference, and area of a circle.\n");
    printf("What is the radius of the circle? ");
    scanf("%f", &r);

    d = 2 * r;
    c = 2 * pi * r;
    a = pi * (r * r);

    printf("\nThe diameter of the circle is %.2f.", d);
    printf("\nThe circumference of the circle is %.2f.", c);
    printf("\nThe area of the circle is %.2f.", a);

    return 0;
}