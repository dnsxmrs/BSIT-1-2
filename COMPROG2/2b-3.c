#include<stdio.h>

int prime(int num) {
    int i, fact = 0, res;
    for (i = 1; i <= num; i++){
        if (num % i == 0) {
            fact++;
        }
    }

    if (fact == 2) {
        printf("%d is A PRIME NUMEBR.\n\n", num);
    } else {
        printf("%d is NOT A PRIME NUMBER.\n\n", num);
    }
}

int main () {
    int intgr, stp = 0;

    printf("---     PRIME NUMBER DETECTOR     ---\n");

    while (stp != 1) {
        printf("Enter an integer value(0 to exit): ");
        scanf("%d", &intgr);

        if (intgr != 0) {
            prime(intgr);
        } else {
            printf("You entered a zero value, the program ended!\n\n");
            stp = 1;
        }
    }
    return 0;
}