#include<stdio.h>
#include<conio.h>

int main () {
    int marr[100], count, i, srch, occr=0;

    printf("--     NUMBER OCCURRENCE DETERMINER     --\n\n");
    printf("How many integers do you want in a list? ");
    scanf("%d", &count); 
    printf("\n");

    for (i = 0; i < count; i++) {  
        printf("Value of element number %d  = ", i);
        scanf("%d", &marr[i]); 
    }

    printf("\nWhat is the number to be searched? ");
    scanf("%d", &srch); 

    for (i = 0; i < count; i++) { 
        if (marr[i] == srch) {
            occr++; 
        }
    }

    printf("\nNumber List : |");
    for (i = 0; i < count; i++) {
        printf("%2d|", marr[i]);
    }
    
    if (occr == 1) {  
        printf("\nThere is %d occurrence of the number %d.", occr, srch); 
    } else {
        printf("\nThere are %d occurrences of the number %d.", occr, srch);
    }
    getch(); 
    return 0;
}
