#include<stdio.h>
#include<conio.h>
#include<string.h>

int main () {
    int i, passn, try = 0, res, comp;
    char usern[20], passw[20], temp, dpass[20];

    printf("-- WELCOME TO PUP QUEZON CITY PORTAL --\n");
    printf("Enter your username (without spaces): ");
    scanf("%s", &usern);
    printf("Characters in your password (max of 20): ");
    scanf("%d", &passn);
    printf("Enter your password (%d characters only): ", passn);

    for (i = 0; i < passn; i++) {
        temp = getch();
        passw[i] = temp;
        temp = '*';
        printf("%c", temp);
    }

    while (try < 3) {
        printf("\n\nEnter your password again: ");
        for (i = 0; i < passn; i++) {
            temp = getch();
            dpass[i] = temp;
            temp = '*';
            printf("%c", temp);
        }

        comp = strcmp(passw, dpass);
        if (comp == 0) {
            printf("\nWelcome to PUP Quezon City!");
            try = 3;
        } else {
            try++;
            if (try == 3) {
                printf("\nIntruder Alert!");
            } else           
                printf("\nTry again!");
        }
    }   
    getch();
    return 0;
}