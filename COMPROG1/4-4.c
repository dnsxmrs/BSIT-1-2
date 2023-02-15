// Create a C program to merge two sorted arrays into one sorted array. 
// Sorted Array size is 10.  Array1 size is equal to 5. Array2 size is equal to 5.
#include<stdio.h>
#include<conio.h>

main () {
    int a1[5], a2[5], sa[10], i, j, temp;

    printf("-----  ARRAY MERGER  -----\n\n");
    printf("Input five integers in the first array.\n");
    for (i = 0; i < 5; i++) {
        printf("Array 1, %d element : ", i);
        scanf("%d", &a1[i]);
    }
    printf("\nNow, input five integers in the second array.\n");
    for (i = 0; i < 5; i++) {
        printf("Array 2, %d element : ", i);
        scanf("%d", &a2[i]);
    }

    for (i = 0; i < 4; i++) {
        for(j = i+1; j < 5; j++) {
            if(a1[i] > a1[j]) { 
                temp = a1[i]; 
                a1[i] = a1[j]; 
                a1[j] = temp; 
            }
        }
    }
    printf("\nThe values of the sorted first array are\n");
    for (i = 0; i < 5; i++) {
        printf("| %d ", a1[i]);
    } printf("|\n");

    for (i = 0; i < 4; i++) {
        for(j = i+1; j < 5; j++) {
            if(a2[i] > a2[j]) { 
                temp = a2[i]; 
                a2[i] = a2[j]; 
                a2[j] = temp; 
            }
        }
    }
    printf("The values of the sorted second array are\n");
    for (i = 0; i < 5; i++) {
        printf("| %d ", a2[i]);
    } printf("|\n"); getch();

    printf("\nMerging the two arrays...\n");
    for(i = 0; i < 5; i++) {
        sa[i] = a1[i];
    } for(j = 0; j < 5; j++) {
        sa[i] = a2[j];
        i++;
    }

    for (i = 0; i < 9; i++) {
        for(j = i+1; j < 10; j++) {
            if(sa[i] > sa[j]) { 
                temp = sa[i]; 
                sa[i] = sa[j]; 
                sa[j] = temp; 
            }
        }
    } getch();
    printf("The values of the sorted merged array are\n");
    for (i = 0; i < 10; i++) {
        printf("| %d ", sa[i]);
    } printf("|\n"); getch();
}