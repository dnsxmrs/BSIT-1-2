//    Create a program to produce the figure below
//    *     *
//     *   *
//       *
//       *      
//       *
#include<stdio.h>

main () {
    int row, col;
    
    for (row = 1; row <= 5; row++){ 
        for (col = 1; col <= 5; col++){
            if ((row == col && row < 4) || (row + col == 6 && row < 4) || (col == 3 && row > 2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n"); 
    }
}