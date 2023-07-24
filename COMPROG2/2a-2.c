#include<stdio.h>
#include<math.h>

int main () {
    int base = 2, i, res;

    printf("        Base 2        \n");
    printf(" Power         Result \n");

    for (i = 0; i < 11; i++) {
        res = pow(base, i);
    printf("%4d%16d\n", i , res);
    }
    return 0;
}