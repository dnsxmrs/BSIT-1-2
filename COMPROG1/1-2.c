/* Create a program to obtain from the user the hourly pay rate and the number of hours worked
for the week of a particular employee. Calculate their pay for the week
(no overtime, and no taxes).  Display the result. */
#include<stdio.h>

main () {
	int hpr, nhwftw, pftw;
	
	printf("Enter your hourly pay rate: ");
	scanf("%d", &hpr);
	printf("Enter the number of hours worked for the week: ");
	scanf("%d", &nhwftw);
	
	pftw = hpr * nhwftw;
	
	printf("The total pay for the week is %d.", pftw);
}