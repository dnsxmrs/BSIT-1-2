#include<stdio.h>

int gcd(int itgr1, int itgr2) {
    int i, res;

    for(i = 1; (i <= itgr1) && (i <= itgr2); ++i){
        if((itgr1 % i == 0) && (itgr2 % i == 0)){
            res = i;
        }
    }
    
    return res;
}

int main () {
    int num1, num2, stp = 0;

    printf("---     GREATEST COMMON DIVISOR     ---\n");

    while (stp != 1) {
        printf("INPUT TWO INTEGERS! (enter 0 to exit)\n");
        printf("Enter value for integer 1: ");
        scanf("%d", &num1);
        printf("Enter value for integer 2: ");
        scanf("%d", &num2);

        if ((num1 != 0) && (num2 != 0)) {
            printf("The greatest common divisor of %d and %d is %d.\n\n", num1, num2, gcd(num1, num2));
        } else {
            printf("You entered a zero value, the program ended!\n\n");
            stp = 1;
        }
    }
    return 0;
}