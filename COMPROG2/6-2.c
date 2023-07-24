#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>

struct node {
    int x;
    struct node *next;
};

struct ture {
    struct node *head, *curr, *tail, *ind;
};

struct ture mayn[3]; // the idea is i stacked the 3 structs to one; 
                    // 0 is 1st sorted linked, 1 is 2nd sorted linked, 2 is 3rd sorted linked combined 1 and 2
int main () {
    int temp, i;
    for (i = 0; i < 3; i++) {
        mayn[i].head = mayn[i].curr = mayn[i].tail = NULL; // setting values to NULL every structs and nodes
    } // mayn[i].head is the same as head; mayn[i].curr is the same as curr; mayn[i].tail is the same as tail.

    // alternative is...
    // mayn[0].head = mayn[0].curr = mayn[0].tail = NULL;
    // mayn[1].head = mayn[1].curr = mayn[1].tail = NULL;
    // mayn[2].head = mayn[2].curr = mayn[2].tail = NULL;

    for (i = 0; i < 2; i++) { // START OF 1ST AND 2ND STRUCTS
        mayn[i].curr = (struct node *) malloc (sizeof(struct node)); // getting of values of 1st linked list
        // system("CLS");
        printf("-----#%d SINGLY LINKED LIST-----\n\n", i+1);        // refer to notes above about 1st, 2nd, 3rd
        printf("Enter a value of X (0 to proceed): ");            
        scanf("%d", &mayn[i].curr->x);
        while (mayn[i].curr->x != 0) {                             // same logic as the past progs
            if (mayn[i].head == NULL) {
                mayn[i].head = mayn[i].curr;
                mayn[i].head->next = NULL;
                mayn[i].tail = mayn[i].curr;
            } else {
                mayn[i].tail->next = mayn[i].curr;
                mayn[i].curr->next = NULL;
                mayn[i].tail = mayn[i].curr;
            }
            mayn[i].curr = (struct node *) malloc (sizeof(struct node));
            printf("Enter a value of X (0 to proceed): ");
            scanf("%d", &mayn[i].curr->x);
        }

        if (mayn[i].head == NULL) {
            // system("CLS");
            printf("\nNo value/s entered!\n\n");
        } else {    
            // system("CLS");
            printf("\n#%d ORIGINAL LINKED LIST DATA:\n\n", i+1);
            mayn[i].curr = mayn[i].head;
            while (mayn[i].curr != NULL) {
                printf("%3d", mayn[i].curr->x);
                mayn[i].curr = mayn[i].curr->next;
            } getch();

        for (mayn[i].curr = mayn[i].head; mayn[i].curr != NULL; mayn[i].curr = mayn[i].curr->next) {
            for (mayn[i].ind = mayn[i].curr->next; mayn[i].ind != NULL; mayn[i].ind = mayn[i].ind->next) {
                if (mayn[i].curr->x > mayn[i].ind->x) {
                    temp = mayn[i].curr->x;
                    mayn[i].curr->x = mayn[i].ind->x;
                    mayn[i].ind->x = temp;
                }
            }
        }

        printf("\n\n#%d SORTED LINKED LIST DATA:\n\n", i+1);
        mayn[i].curr = mayn[i].head;
        while (mayn[i].curr != NULL) {
            printf("%3d", mayn[i].curr->x);
            mayn[i].curr = mayn[i].curr->next;
        }
        printf("\n\n");
        getch();
        }
    } // END OF 1ST AND 2ND STRUCTS

    // COMBINE AND SORTING

    for (i = 0; i < 2; i++) { // COMBINING
        mayn[i].curr = mayn[i].head;
        while (mayn[i].curr != NULL) {
            mayn[2].curr = (struct node *) malloc (sizeof(struct node));
            mayn[2].curr->x = mayn[i].curr->x;
            if (mayn[2].head == NULL) {
                mayn[2].head = mayn[2].curr;
                mayn[2].head->next = NULL;
                mayn[2].tail = mayn[2].curr;
            } else {
                mayn[2].tail->next = mayn[2].curr;
                mayn[2].curr->next = NULL;
                mayn[2].tail = mayn[2].curr;
            }
            mayn[i].curr = mayn[i].curr->next;
        }
    }

    // system("CLS");
    printf("\nCOMBINED 1ST AND 2ND LINKED LIST DATA:\n\n");
    mayn[2].curr = mayn[2].head;
    while (mayn[2].curr != NULL) {
        printf("%3d", mayn[2].curr->x);
        mayn[2].curr = mayn[2].curr->next;
    } getch();

    for (mayn[2].curr = mayn[2].head; mayn[2].curr != NULL; mayn[2].curr = mayn[2].curr->next) {
        for (mayn[2].ind = mayn[2].curr->next; mayn[2].ind != NULL; mayn[2].ind = mayn[2].ind->next) {
            if (mayn[2].curr->x > mayn[2].ind->x) {
                temp = mayn[2].curr->x;
                mayn[2].curr->x = mayn[2].ind->x;
                mayn[2].ind->x = temp;
            }
        }
    } // SORTING

    printf("\n\nSORTED 1ST AND 2ND LINKED LIST DATA:\n\n");
        mayn[2].curr = mayn[2].head;
        while (mayn[2].curr != NULL) {
            printf("%3d", mayn[2].curr->x);
            mayn[2].curr = mayn[2].curr->next;
        }
    getch();
    return 0;
}