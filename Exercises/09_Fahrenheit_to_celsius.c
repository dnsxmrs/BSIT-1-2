#include<stdio.h>

main () {
    float cs, fh;

    printf("Let's convert fahrenheit to celsius.\n");
    printf("What is the temperature in fahrenheit? ");
    scanf("%f", &fh);
    
    cs = (fh - 32) * .5556;

    printf("%.2f fahrenheit is %.2f in celsius.\n", fh, cs);
}