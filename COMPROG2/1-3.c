#include<stdio.h>

main () {
    int marr[100], count, i, srch, occr=0;

    printf("How many integers do you want in a list? ");
    scanf("%d", &count); // number of elements stored in 'count' variable

    for (i = 0; i < count; i++) {  // for-loop in getting the values 
        printf("Element %d value = ", i);
        scanf("%d", &marr[i]); // every element is stored in main array variable called 'marr'
    }

    printf("What is the number to be searched? ");
    scanf("%d", &srch); // number to be searched is stored in 'srch' variable

    for (i = 0; i < count; i++) { // for-loop in comparing the number to be searched and the main array
        if (marr[i] == srch) {
            occr++; // if array and srch is same, then occurrence is plus one (+1)
        }
    }

    printf("There are %d occurence/s of the number %d", occr, srch); // displaying output
}
