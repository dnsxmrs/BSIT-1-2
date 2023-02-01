//    Gary works at Jemimah’s hamburger outlet. 
//    During the busiest hour of the day, he can deliver 12 hamburgers at the counter every 2 minutes. 
//    The manager wants to determine how long it will take Gary to deliver 600 hamburgers.
//    Display the result in an hour by hour basis.

//                 JEMIMAH’S HAMBURGER
// HOUR				MINUTES			NUMBER OF BURGERS

// 				       2					   12
// 				       4					   24
// 				       6					   36 …..
//                     58
//  1                  0                         
#include<stdio.h>

main () {
    int h, m, b;

    printf("||===============JEMIMAH'S HAMBURGER===============\n");
    printf("||    HOUR      MINUTES    NUMBER OF HAMBURGERS    \n");
    
    b=0; m=0; h=0;
    while (b <= 588) {
        if (m == 60) {
            h = h + 1;
            m = 0;
            printf("||     %2d         %3d           %7d    \n", h, m, b);
        } else {
            b = b + 12;
            m = m + 2;
            printf("||                %3d           %7d    \n", m, b);
        }
    }
    printf("---------------------------------------------------\n");
    printf("Gary will take %d hour and %d minutes to deliver %d hamburgers.", h, m, b);
}