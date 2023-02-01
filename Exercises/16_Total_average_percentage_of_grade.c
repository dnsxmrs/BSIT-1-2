#include<stdio.h>

main () {
    int a, b, c, d, e, t, av;
    float p;

    printf("Let's find the total, average, and percent of your marks.\n");
    printf("What is your five marks (x x x x x)? ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
       
    t = a + b + c + d + e;
    av = t / 5;
    p = av;

    printf("\nThe total of your marks is %.d.\n", t);
    printf("The average of your marks is %.d.\n", av);
    printf("The percent of your marks is %.2f.\n", p);
}