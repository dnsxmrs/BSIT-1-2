//    It was 1985 when the President decreed that the rebel Bareng be evicted from the Philippines for his crimes.
//    The President’s order is that Bareng is to be taken to sea and left to wander in a small boat possibly to find
//    the nearest civilization (200 miles away from the Philippines).  Bareng is also given 5 days ration of food
//    and water.  Displaying his compassion, the President had Bareng taken 50 miles in the correct direction.
//    Bareng then begins sailing.  Initially, he is able to sail 20 miles/day.  However, after each day, he becomes
//    weaker and weaker so his rate decreases by 1 mile/day.  Also, he loses 2 miles of those he gained each day
//    to wind and seastorm that blows him backward.  Although Bareng can stretch his ration of food and water,
//    he will collapse and die on the 13th day of wandering.
//    Create a program that will calculate:

//    a.	 The day, rate and miles he has to travel each day.
//    b.	The day when Bareng collapses or reaches civilization.

//    Output layout:
// 		     DAY			RATE			MILES
// 		      1			     20			     68
// 		      2			     19			     85
// 		      …			      …			     ...

//    Bareng reaches civilization on day ___ or Bareng dies on day ___
#include<stdio.h>

main () {
    int d = 1, r = 20, m = 68, re;

    printf("  DAY    RATE    MILES  \n");

    while (m <= 200) {
        while (d <= 5) {
            printf("   %2d     %2d      %3d    \n", d, r, m);
            d = d + 1;
            r = r - 1;
            m = m + r - 2;
        }
        re = d;
        printf("   %2d     %2d      %3d    \n", d, r, m);
        d = d + 1;
        r = r - 1;
        m = m + r - 2;
    }

    if (re<=12) {
        printf("\nBareng reaches civilization on day %d.\n", re);
    } else
        printf("\nBareng dies on day 13.\n");
}