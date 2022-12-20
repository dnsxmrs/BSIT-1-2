/* Create a program to determine if the input year is a leap year or not.
If true, then display the message “___ is a Leap Year!”.
Otherwise, display the message, “___ is not a Leap Year!”. */
#include<stdio.h>

main () {
    int dy;

    printf("What is your desired year? ");
    scanf("%d", &dy);

    if (dy%4 == 0)
        printf("\n%d is a Leap Year!", dy);
    else
        printf("\n%d is not a Leap Year!", dy);
}