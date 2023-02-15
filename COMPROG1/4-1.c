// Create a C program to determine the highest and lowest values in an array with 10 elements.
#include<stdio.h>
#include<conio.h>

main () {
    int x[10], i, j, temp, hi, low;

    printf("HIGHEST AND LOWEST INTERGERS IN AN ARRAY\n");

    printf("\nInput 10 integers\n");
    for (i = 0; i < 10; i++) {
        printf("Element no. %d in the array = ", i);
        scanf("%d", &x[i]);
    }

    printf("\nThe values of the array are\n");
    for (i = 0; i < 10; i++) {
        printf("| %d ", x[i]);
    }
    printf("|");
    getch();

    for (i=0; i<9;i++) {
        for(j=i+1; j<10;j++) {
            if(x[i] > x[j]) { 
                temp = x[i]; 
                x[i] = x[j]; 
                x[j] = temp; 
            }
        }
    }

    printf("\n\nHighest integer in the array is : %d", x[9]);
    getch();
    printf("\nLowest integer in the array is : %d", x[0]);
    getch();
}