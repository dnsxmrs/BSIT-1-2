// Create a C program to convert an integer value to its equivalent binary value.
#include<stdio.h>
#include<conio.h>

main () {
    int val, x[32], i, j;
    printf("-----  INTEGER to BINARY -----\n");

    printf("Input a number (limt = 2147483647): ");
    scanf("%d", &val);

    printf("\nInitialized value : %d\n", val);
    getch();
    printf("Binary value of %d : ", val);

    for (i = 0; val > 0; i++) {
        x[i] = val%2;
        val = val/2;
    }

    for (j = i-1; j >= 0; j--) {
        printf("%d", x[j]);
    }
    getch();
}