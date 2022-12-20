#include<stdio.h>

main () {
    float x, y, t;

    printf("Let's find the third angle of a triangle given the two angles.\n");
    printf("What is the first angle? ");
    scanf("%f", &x);
    printf("What is the second angle? ");
    scanf("%f", &y);
   
    t = 180 - (x + y);

    printf("The angles of the triangle are %.2f, %.2f, and %.2f.\n", x, y, t);
}