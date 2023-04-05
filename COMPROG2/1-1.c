// Create a C program that will input integer values in a 5 x 5 array, then do the following:
// a.	Get the sum of the rows and place it in a one-dimensional array.
// b.	Get the sum of the columns and place it in a one-dimensional array.
// c.	Determine if all the row sum are equal and display the message “Row sums are equal”.  Otherwise, display “Row sums are not equal’.  
// d.	Determine if all the column sum are equal and display the message “Column sums are equal”.  Otherwise, display “Column sums are not equal’.  
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main () {
    int tab[5][5], smrw[5], smcl[5], i, j, total, chrw = 0, chcl = 0;

    printf("--  ROW, COLUMN SUMMATION AND 'IF EQUAL' DETERMINER  --\n\n");
    printf("I will need 25 numbers from you, be ready.\n\n");
    printf("press any key to continue...");
    getch(); // pause the terminal
    system("cls"); // clear the terminal

    for (i = 0; i < 5; i++) { // for-loop in getting the values
        for (j = 0; j < 5; j++) {
            printf("Value of %d row, %d column = ", i, j);
            scanf("%d", &tab[i][j]); // values stored in an array called 'tab'
        }
    }
    system("cls");

    printf("\n-- THE TABLE OF VALUES --\n"); // display of the array in 2D
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%5d", tab[i][j]);
        }
        printf("\n");
    }
    getch();

    total = 0;
    for (i = 0; i < 5; i++) { // summation of values per row
        for (j = 0; j < 5; j++) {
            total += tab[i][j];
        }
        smrw[i] = total; // storing total of values to an array called 'smrw'
        total = 0;
    }
    for (i = 0; i < 4; i++) { // for-loop in determining if each sum-row are the same
        for (j = i + 1; j < 5; j++) {
            if (smrw[i] == smrw[j]) { // if smrw[0] is equal to smrw[1]
                chrw = 1; // then check row is true (same values)
            } else {
                chrw = 0; // otherwise, false (different values)
                break; // exit the inner for-loop
            }
        }
        if (chrw == 0) // if check row is false (values are different)
            break; // then exit the for-loop, otherwise, continue
    }

    for (j = 0; j < 5; j++) {  // summation of values per column
        for (i = 0; i < 5; i++) {
            total += tab[i][j];
        }
        smcl[j] = total; // storing total of values to an array called 'smcl'
        total = 0;
    }
    for (i = 0; i < 4; i++) { // for-loop in determining if each sum-column are the same
        for (j = i + 1; j < 5; j++) {
            if (smcl[i] == smcl[j]) { // if smcl[0] is equal to smcl[1]
                chcl = 1; // then check column is true (same values)
            } else {
                chcl = 0; // otherwise, false (different values)
                break; // exit the inner for-loop
            }
        }
        if (chcl == 0) // if check column is false (values are different)
            break; // then exit the for-loop, otherwise, continue
    }

    printf("\nThe sum of each row are:"); // printing of sum per row
    for (i = 0; i < 5; i++) {
        printf(" %d", smrw[i]);
    }
    if (chrw == 1) { // if check row is true
        printf("\nRow sums are equal."); // then display the given output
    } else {
        printf("\nRow sums are not equal."); // otherwise, display the given output
    }

    printf("\n\nThe sum of each column are:"); // printing of sum per column
    for (i = 0; i < 5; i++) {
        printf(" %d", smcl[i]);
    }
    if (chcl == 1) { // if check column is true
        printf("\nColumn sums are equal."); // then display the given output
    } else {
        printf("\nColumn sums are not equal."); // otherwise, display the given output
    }

    return 0;
}