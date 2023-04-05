// Create a C program that will input integer values in a 5 x 5 array.
// Check the values and change all negative values to zero values.
// Display the original array and the changed array.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main () {
    int marr[5][5], i, j;

    printf("--     NEGATIVE VALUES TO ZERO VALUES     --\n");
    printf("I will need 25 numbers from you, be ready.\n\n");
    printf("press any key to continue...\n");
    getch(); 
    system("cls");
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Value of %d row, %d column = ", i, j);
            scanf("%d", &marr[i][j]);
        }
    }
    system("cls");

    printf("\n-- THIS IS THE ORIGINAL ARRAY --\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%5d", marr[i][j]);
        }
        printf("\n");
    }
    getch();

    printf("\nChanging all negative values to zero...\n");
    getch();

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (marr[i][j] < 0) {
                marr[i][j] = 0;
            }
        }
    }

    printf("\n-- THIS IS THE CHANGED ARRAY --\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%5d", marr[i][j]);
        }
        printf("\n");
    }
    getch();
}