#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>

struct node {
    int x;
    struct node *next;
};

struct node *head, *curr, *tail;

int main () {
    head=curr=tail=NULL;
    int cntr=0, i;

    curr = (struct node *) malloc (sizeof(struct node));
    printf("Enter a value of X (0 to terminate): ");
    scanf("%d", &curr->x);
    while (curr->x != 0) {
        if (head == NULL) {
            head = curr;
            head->next = NULL;
            tail = curr;        
        } else {
            tail->next = curr;
            curr->next = NULL;
            tail = curr;            
        }
        cntr++;
        curr = (struct node *) malloc (sizeof(struct node));
        printf("Enter a value of X (0 to terminate): ");
        scanf("%d", &curr->x);
    }

    if (head == NULL){
        // system("CLS");
        printf("\n\nNo value/s entered!\n\n");
    } else {    
        // system("CLS");
        printf("PUTTING INTEGERS FROM SINGLY LINKED LIST TO AN ARRAY...\n\n");
        int rry[cntr];  
        curr = head;
        for (i = 0; i < cntr; i++) {
                rry[i] = curr->x;
                curr = curr->next;
        }
        getch();

        printf("PRINTING THE ARRAY...\n\n");
        for (i = 0; i < cntr; i++) {
            printf("%3d", rry[i]);
        }
    }
    getch();
    return 0;
}