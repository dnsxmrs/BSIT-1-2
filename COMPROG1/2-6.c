/* Create a program that will input an integer number and determine
if the number is zero, odd or even number.  If zero, then
display the message, “The number ____ is ZERO!”.  If the number
is an odd number, then display the message, “The number ___ is
an odd number!”.  Otherwise, display the message, “The number
____ is an even number!”. */
#include<stdio.h>

main () {
    int in;

    printf("Enter your integer: ");
    scanf("%d", &in);

    if (in == 0)
        printf("\nThe number %d is ZERO!", in);  
    else if (in%2 == 0)
        printf("\nThe number %d is an even number!", in);
    else    
        printf("\nThe number %d is an odd number!", in);
}