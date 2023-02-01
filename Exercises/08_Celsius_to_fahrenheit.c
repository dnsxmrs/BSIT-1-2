#include<stdio.h>

main () {
    float cs, fh;

    printf("Let's convert celsius to fahrenheit.\n");
    printf("What is the temperature in celsius? ");
    scanf("%f", &cs);

    fh = (cs * 1.8) + 32;

    printf("%.2f celsius is %.2f in fahrenheit.\n", cs, fh);
}