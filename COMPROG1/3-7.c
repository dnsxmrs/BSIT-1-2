//    7.	 Margaret River Wine Company wants to determine how long it will take a leaking barrel to fill
//    the bucket underneath it.  The bucket holds 2,452 drops of wine.  The barrel leaks at a rate of
//    162 drops/hour.  At the end of every 3 hours, a cat drinks 28 drops of wine from the bucket.
//    Create a program to calculate how long it will take to fill the bucket.  Present the output in
//    an hour by hour basis.  How many drops of wine did the cat drink?

//    Output layout:

// 	    HOUR			DROPS
//       0	             162
//       1	             324
//       2	             458
//       3	             620
//       4	               …

//    The cat drank __ drops of wine
#include<stdio.h>

main () {
    int h = 0, d = 162, i = 1,cd = 0;
    printf("   HOUR      DROPS   \n");
    while (d <= 2452) {
        h += 1;
        if (i%3 == 0) {
            cd += 28;
            d = d - 28;
            printf("    %2d        %4d   \n", h, d);
        } else {
            printf("    %2d        %4d   \n", h, d);
        }
        d += 162;
        i++;
    }
    printf("\nThe cat drank %d drops of wine\n\n", cd);
}