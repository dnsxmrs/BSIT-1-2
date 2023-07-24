#include<stdio.h>
#include<conio.h>

int fact(int itgr) {
    int fctrl = 1, i;

    for (i = 1; i <= itgr; i++) {
        fctrl = fctrl * i;
    }

    return fctrl;
}

int main () {
    int num;

    printf("---       FACTORIAL OF INTEGER       ---\n");
    printf("Let's find the factorial of an integer!\n");
    getch();
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\nThe factorial of integer (%d) is %d.", num, fact(num));
    getch();
    return 0;
}