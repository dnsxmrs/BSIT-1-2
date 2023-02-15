// In math, given, set A and set B.  If all elements of set A are in set B,
// then set A is a subset of set B.  Create a C program to check whether an
// array is a subset of another array. Main array max size is 10.
// Second (subset) array max size is 5.
#include<stdio.h>
#include<conio.h>

main () {
    int sa[5], ma[10], sac, mac, i , j, res;

    printf("-----  MAIN ARRAY AND SUB ARRAY  -----\n\n");
    printf("How many elements do you want in Set A (max of 5)? ");
    scanf("%d", &sac);
    printf("How many elements do you want in Set B (max of 10)? ");
    scanf("%d", &mac);

    printf("\nInput %d element/s in Set A.\n", sac);
    for (i = 0; i < sac; i++) {
        printf("Set A, %d element : ", i);
        scanf("%d", &sa[i]);
    }
    printf("\nInput %d element/s in Set B.\n", mac);
    for (i = 0; i < mac; i++) {
        printf("Set B, %d element : ", i);
        scanf("%d", &ma[i]);
    }

    printf("\nThe value/s of Set A are\n");
    for (i = 0; i < sac; i++) {
        printf("| %d ", sa[i]);
    } getch();
    printf("|\n");
    printf("The value/s of Set B are\n");
    for (i = 0; i < mac; i++) {
        printf("| %d ", ma[i]);
    }
    printf("|\n");
    getch();

    if (sac <= mac) {
        res = 1;
        for (i = 0; i < sac; i++) {
            for (j = 0; j < mac; j++) {
                if(sa[i] == ma[j])
                    break;
                }
            if(j == mac)
                res = 0;
        }
        if (res == 1) {
            printf("\nSet A is a subset of Set B.");
        } else 
            printf("\nSet A is not a subset of Set B.");
        getch();
    } if (sac > mac) {
        res = 1;
        for (i = 0; i < mac; i++) {
            for (j = 0; j < sac; j++) {
                if(ma[i] == sa[j])
                    break;
                }
            if(j == sac)
                res = 0;
        }
        if (res == 1) {
            printf("\nSet B is a subset of Set A.");
        } else 
            printf("\nSet B is not a subset of Set A.");
        getch();
    }
}