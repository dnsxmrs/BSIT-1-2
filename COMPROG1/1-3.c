/* Create a program that will calculate the current balance in a savings account.
The program should obtain from the user the following information:
the starting account balance, the total amount of deposits made, the total
amount of withdrawals made.  Display the calculated current balance. */
#include<stdio.h>

int main () {
	int sb, ad, aw;
	
	printf("Enter your starting account balance: ");
	scanf("%d", &sb);
	printf("Enter the total amount of deposit: ");
	scanf("%d", &ad);
	printf("Enter the total amount of withdrawal: ");
	scanf("%d", &aw);
	
	printf("\nThe calculated current balance is %d.", sb+ad-aw);
	return 0;
}