#include<stdio.h>

main () {
    int l, w, p;

    printf("Let's find the perimeter of a Rectangle.\n");
    printf("First, enter the length of the rectangle: ");
    scanf("%d", &l);a
    printf("Lastly, enter the width of the rectangle: ");
    scanf("%d", &w);

    p = 2*(l+w);

    printf("\nThe perimeter of the Rectangle is %d.", p);    
}