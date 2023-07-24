#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>

struct node {
    int x;
    struct node *next;
};

struct node *head, *curr, *tail, *ind;
int temp;

int main () {
    head=curr=tail=NULL;
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
        curr = (struct node *) malloc (sizeof(struct node));
        printf("Enter a value of X (0 to terminate): ");
        scanf("%d", &curr->x);
    }

    if (head == NULL){
        system("CLS");
        printf("\n\nNo value/s entered!\n\n");
    } else {    
        system("CLS");
        printf("\n\nORIGINAL LINKED LIST DATA:\n\n");
        curr = head;
        while (curr != NULL) {
            printf("%3d", curr->x);
            curr = curr->next;
        } printf("\n\n"); getch();

        for (curr = head; curr != NULL; curr = curr->next) {
            for (ind = curr->next; ind != NULL; ind = ind->next) {
                if (curr->x > ind->x) {
                    temp = curr->x;
                    curr->x = ind->x;
                    ind->x = temp;
                }
            }
        }

        printf("\n\nSORTED LINKED LIST DATA:\n\n");
        curr = head;
        while (curr != NULL) {
            printf("%3d", curr->x);
            curr = curr->next;
        }
        printf("\n\n");
    }
    getch();
    return 0;
}