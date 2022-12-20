// Create a program that will convert input hours to minutes and minutes to hour-minutes
#include<stdio.h>

int main () {
    int inp2, mns, hrs, xmns;
    float inp1;
    
    printf("Enter number of hours: ");
    scanf("%f", &inp1);

    mns = inp1 * 60;

    printf("%.2f hour/s is %d minute/s\n", inp1, mns);

	printf("\nEnter number of minutes: ");
    scanf("%d", &inp2);

    hrs = inp2 / 60;
    xmns = inp2 % 60;

    printf("%d minute/s is %d hour/s and %d minute/s", inp2, hrs, xmns);
    
    return 0;
}