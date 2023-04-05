// Create a C program that will search for an integer value from a list of n integer values
// and count the number of occurrences of that number.
#include<stdio.h>
#include<conio.h>

main () {
    int marr[100], count, i, srch, occr=0;

    printf("--     NUMBER OCCURRENCE DETERMINER     --\n");
    printf("How many integers do you want in a list? ");
    scanf("%d", &count); // number of elements stored in 'count' variable

    for (i = 0; i < count; i++) {  // for-loop in getting the values 
        printf("Value of element number %d  = ", i);
        scanf("%d", &marr[i]); // every element is stored in main array variable called 'marr'
    }

    printf("\nWhat is the number to be searched? ");
    scanf("%d", &srch); // number to be searched is stored in 'srch' variable

    for (i = 0; i < count; i++) { // for-loop in comparing the number to be searched and the main array
        if (marr[i] == srch) {
            occr++; // if array and srch is same, then occr is plus one (+1)
        }
    }

    if (occr == 1) {  // displaying output
        printf("\nThere is %d occurrence of the number %d.", occr, srch); 
    } else {
        printf("\nThere are %d occurrences of the number %d.", occr, srch);
    }
    getch(); 
}
