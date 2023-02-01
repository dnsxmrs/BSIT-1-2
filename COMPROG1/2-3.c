/* Create a program that will compute for the week’s wage of an employee.
Input hours worked and rate per hour.  If hours worked is greater than
40, then the employee is entitled to an overtime pay which rate per hour
is ½ greater than his/her hourly rate.  The overtime rate is applied only
to the excess hours beyond 40 hours.  Display the week’s wage of the employee. */
#include<stdio.h>

int main () { 
    float rph, hw;
    int hwftw;

    printf("Enter your hours worked for the day: ");
    scanf("%f", &hw);
    printf("Enter your rate per hour: ");
    scanf("%f", &rph);

    hwftw = hw * 7;

    if (hwftw <= 40)
        printf("\nYour week's wage is %.2f.", hwftw*rph);
    else if (hwftw > 40)
        printf("\nYour are entitle to an overtime pay, and your week's wage is %.2f.", (40*rph)+((hwftw-40)*(rph+(rph/2))));
    else
        printf("\nPlease try again.");

    return 0;
}