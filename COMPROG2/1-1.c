#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main () {
    int tab[5][5], smrw[5], smcl[5], i, j, total, chrw = 0, chcl = 0;

    printf("--  ROW, COLUMN SUMMATION AND 'IF EQUAL' DETERMINER  --\n\n");
    printf("I will need 25 numbers from you, be ready.\n\n");
    printf("press any key to continue...");
    getch();
    system("cls");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Value of %d row, %d column = ", i, j);
            scanf("%d", &tab[i][j]);
        }
    }
    system("cls");

    printf("\n-- THE TABLE OF VALUES --\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%5d", tab[i][j]);
        }
        printf("\n");
    }

    total = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            total += tab[i][j];
        }
        smrw[i] = total;
        total = 0;
    }
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (smrw[i] == smrw[j]) {
                chrw = 1;
            } else {
                chrw = 0;
                break;
            }
        }
        if (chrw == 0)
            break;
    }

    for (j = 0; j < 5; j++) {
        for (i = 0; i < 5; i++) {
            total += tab[i][j];
        }
        smcl[j] = total;
        total = 0;
    }
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (smcl[i] == smcl[j]) {
                chcl = 1;
            } else {
                chcl = 0;
                break;
            }
        }
        if (chcl == 0)
            break;
    }

    printf("\nIs the sum of rows are all equal?");
    if (chrw == 1) {
        printf("\n- Row sums are equal.");
    } else {
        printf("\n- Row sums are not equal.");
    }

    printf("\n\nIs the sum of columns are all equal?"); 
    if (chcl == 1) {
        printf("\n- Column sums are equal.");
    } else {
        printf("\n- Column sums are not equal.");
    }
    printf("TESTING FOR GIT");

    return 0;
}
