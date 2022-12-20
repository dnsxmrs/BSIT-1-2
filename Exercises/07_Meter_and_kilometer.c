#include<stdio.h>

main () {
    float l, m, km;

    printf("Let's convert centimeter to meter and kilometer.\n");
    printf("What is the length in centimeter? ");
    scanf("%f", &l);

    m = l * 0.01;
    km = l * 0.00001;

    printf("%.0f centimeters is %.2f in meters and %.4f in kilometers.\n", l, m, km);
}