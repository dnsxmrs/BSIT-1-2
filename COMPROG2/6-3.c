#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>

struct node {
    struct node *prev;
    char x;
    struct node *next;
};

struct node *head, *curr, *tail, *ind;

int main () {
    int arrs, cntr, i, result, cntn = 1;

    while (cntn) {
        head = curr = tail = NULL; cntr = 0; result = 1;
        printf("\nHow many characters are there in your word? ");
        scanf("%d", &arrs);
        char arr[arrs];
        printf("Enter your word: ");
        scanf(" %s", arr);

        while (cntr < arrs) {     
            curr = (struct node *) malloc (sizeof(struct node));
            curr->x = arr[cntr];                  
            if (head == NULL) {                             
                head = curr;
                head->prev = NULL;
                head->next = NULL;
                tail = curr;
            } else {
                tail->next = curr;
                curr->prev = tail;
                curr->next = NULL;
                tail = curr;
            }
            cntr++;
        }

        curr = head;
        ind = tail;
        i = 0;
        while (i <= cntr/2) {
            if (curr->x != ind->x) {
                result = 0;
                break;
            }
            curr = curr->next;
            ind = ind->prev;
            i++;
        }

        if (result == 1) {
            printf("\nThe word - %s - is A PALINDROME!\n\n", arr);
        } else {
            printf("\nThe word - %s - is NOT A PALINDROME!\n\n", arr);
        }
        getch();

        printf("Do you want to try another word (1-YES / 0-NO)? ");
        scanf("%d", &cntn);
    }
    printf("The program has ended!!");
    return 0;
}