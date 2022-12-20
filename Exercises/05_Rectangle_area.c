#include<stdio.h>

main () {
    int l, w, a;

    printf("Let's find the area of a Rectangle.\n");
    printf("First, enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Lastly, enter the width of the rectangle: ");
    scanf("%d", &w);

    a = l*w;

    printf("\nThe area of the Rectangle is %d.", a);    
}