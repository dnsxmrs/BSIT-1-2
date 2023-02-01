#include<stdio.h>

main () {
    int d, w, dy, y;
    
    printf("Let's convert the number of days to years, weeks and days.\n");
    printf("Enter the number of days: ");
    scanf("%d", &d);

    y = d / 365;
    w = (d % 365) / 7;
    dy = (d % 365) % 7;

    printf("%d days is equal to %d year/s, %d week/s, and %d day/s.", d, y, w, dy);
}