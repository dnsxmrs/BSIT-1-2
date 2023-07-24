#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>

struct Employee {
    char number[11];
    char name[16];
    char firstName[15];
    char lastName[15];
    char status;
    int hoursWorked;
    float deductions;
    float basicSalary;
    float overtimePay;
    float netPay;
};

struct Node {
    struct Node *prev;
    int x;
    struct Node *next;
};
struct Node *head, *curr, *tail, *temp, *hold;

int *sort;
void members(void);
void caseNumber1(void);
void calculateNetPay(struct Employee* emp);
void caseNumber2(void);
int createDoubly(struct Node *curr, int *sort);
int displayDoubly(struct Node *curr);
int sortDoubly(struct Node *curr, int *sort);
int insertNode(struct Node *curr, int *sort);
int deleteNode(struct Node *curr);
int searchNode(struct Node *curr);


int main() {  // main menu (compilation of 1 and 2 case study problems)
    int mainc;
    while(mainc != 4) {
        system("CLS");
        printf(" ######## ###   ### ########    #####    #######   ######## ########   ####### \n");
        printf("######### #### #### ###   ###  ### ###  ######### ######### ###   ### #########\n");
        printf("###        #######  ###   ### ###   ### ###       ###       ###   ### ###      \n");
        printf("#########   #####   ########  ######### ########  ######### ########  ######## \n");
        printf("#########   #####   ######    ###   ###  ######## ######### ######     ########\n");
        printf("##         #######  ### ###   ###   ###       ### ###       ### ###         ###\n");
        printf("######### #### #### ###  ###  ###   ### ######### ######### ###  ###  #########\n");
        printf(" ######## ###   ### ###   ### ###   ###  #######   ######## ###   ###  ####### \n\n");
        printf("===============================================================================\n");
        printf("|                                                                             |\n");
        printf("|                            [ 1 ] GROUP MEMBERS                              |\n");
        printf("|                            [ 2 ] PIXELSYS PAYROLL                           |\n");
        printf("|                            [ 3 ] MAIN MENU DRIVEN                           |\n");
        printf("|                            [ 4 ] EXIT THE PROGRAM                           |\n");
        printf("|                                                                             |\n");
        printf("===============================================================================\n\n");
        printf("Enter your choice: ");
        scanf("%d", &mainc);
        switch (mainc) {
        case 1:
            members();  // function call to members function with void type, line 72
            break;
        case 2:
            caseNumber1();  // function call to case study number 1 function with void type, line 84
            // getch(); no need for getch for the mean time
            break;
        case 3:
            caseNumber2();  // function call to case study number 2 function with void type, line 94 (tentative)
            // getch(); no need for getch for the mean time
            break;
        case 4:  // exiting the program
            system("CLS");
            printf("Exiting the program... press any key");
            getch();
            break;
        default:  // if input is not between 1-4
            printf("\n==================================  [ Warning! ]  =============================\n");
            printf("|                      Please input a number from 1 - 4 only.                 |\n");
            printf("===============================================================================");
            printf("Press any key to continue...");
            getch();
            break;
        }
    }
}

void members() {
    system("CLS");
    printf("==============================================\n");
    printf("===============[ GROUP MEMBERS ]==============\n");
    printf("==============================================\n");
    printf("|                                            |\n");
    printf("|  MEMBER #1: ALOVEROS, BARON RANIEL E.      |\n");
    printf("|  MEMBER #2: BERTUSO, RUBEN JR.             |\n");
    printf("|  MEMBER #3: BORJA, MA. NADINE A.           |\n");
    printf("|  MEMBER #4: MARIAL, ERICE MICHAEL D.       |\n");
    printf("|  MEMBER #5: POLICARPIO, STYVN RHYZ KYL G.  |\n");
    printf("|                                            |\n");
    printf("==============================================\n");
    printf("Press any key to return to menu...");
    getch();
}

void caseNumber1() {
	int i;
    FILE *fp;
    struct Employee employees[100];
    int n, gennum = 2023, genid = 17000;
    fp = fopen("pixelsyspayroll.txt", "w");
    if(fp == NULL){  // Check if file can be created
        printf("File cannot be created!");
        getch();
    } else {
        system("CLS");
        printf("Enter the number of employees: ");
        scanf("%d", &n);
        for(i = 0; i < n; i++) {
            printf("\nEmployee #%d\n", i + 1);
            printf("Employee Number: ");
            scanf(" %s", &employees[i].number);
            fflush(stdin);
            printf("Employee First Name: ");
            gets(employees[i].firstName);
            printf("Employee Last Name: ");
            gets(employees[i].lastName);
            printf("Status Code (R for Regular, C for Casual): ");
            scanf(" %c", &employees[i].status);
            printf("Hours Worked: ");
            scanf("%d", &employees[i].hoursWorked);
            printf("Deductions: ");
            scanf("%f", &employees[i].deductions);
            if (employees[i].status == 'R' || employees[i].status == 'r') {
                printf("Basic Salary: ");
                scanf("%f", &employees[i].basicSalary);
            } else if (employees[i].status == 'C' || employees[i].status == 'c') {
                printf("Basic Rate: ");
                scanf("%f", &employees[i].basicSalary);
                employees[i].basicSalary *= employees[i].hoursWorked;
            }   
            calculateNetPay(&employees[i]);
            fprintf(fp,"%s %s %s %c %5.2f %5.2f %5.2f %5.2f\n", employees[i].number, employees[i].firstName, employees[i].lastName, employees[i].status, employees[i].basicSalary, employees[i].overtimePay, employees[i].deductions, employees[i].netPay);
        }
        fclose(fp);
        system("CLS");
    }

    fp = fopen("pixelsyspayroll.txt","r");    

    if(fp == NULL){ 
        printf("File cannot be opened for reading!");
        exit(1);
    } else {
        printf("                                  PIXELSYS                                 \n");
        printf("                                 Tagiug City                               \n\n");
        printf("                                  Payroll                                  \n\n");
        printf("    Employee           Employee          Status    Basic       Overtime  Deductions       Net  \n");
        printf("     Number              Name                     Salary          Pay                     Pay  \n");
        for(i = 0; i < n; i++) { // get data from file
            fscanf(fp, "%s %s %s %c %f %f %f %f\n", &employees[i].number, &employees[i].firstName, employees[i].lastName, &employees[i].status, &employees[i].basicSalary, &employees[i].overtimePay, &employees[i].deductions, &employees[i].netPay); // reading/getting the records from the file// print data on display
            printf("%10s\t%10s %2s\t%7s\t%5.2f\t%7.2f\t%8.2f\t%5.2f\n", employees[i].number, employees[i].firstName, employees[i].lastName,
                (employees[i].status == 'R'  ||  employees[i].status == 'r' ? "Regular" : "Casual"),
                employees[i].basicSalary, employees[i].overtimePay,
                employees[i].deductions, employees[i].netPay);
        }
        printf("Press any key to continue...");
        fclose(fp);
        getch();
    }
    
}

void calculateNetPay(struct Employee* emp) {
    if (emp->status == 'R' || emp->status == 'r') {
        float basicRate = emp->basicSalary / 160.0;
        if (emp->hoursWorked > 160) {
            float overtimeRate = basicRate * 1.5;
            emp->overtimePay = (emp->hoursWorked - 160) * overtimeRate;
        } else {
            emp->overtimePay = 0.0;
        }
        emp->netPay = emp->basicSalary + emp->overtimePay - emp->deductions;
    } else if (emp->status == 'C' || emp->status == 'c') {
        emp->overtimePay = 0.0;
        if (emp->hoursWorked > 160) {
            float overtimeRate = emp->basicSalary / 160.0 * 1.5;
            emp->overtimePay = (emp->hoursWorked - 160) * overtimeRate;
        }
        emp->netPay = emp->basicSalary + emp->overtimePay - emp->deductions;
    }
}

void caseNumber2() {                                            // case study number 2
    int choice2, sort;
    while(choice2 != 7) {
        system("CLS");
        printf("==============================================\n");
        printf("=================[ MAIN MENU ]================\n");
        printf("==============================================\n");  // main menu driven
        printf("|                                            |\n");
        printf("|    [ 1 ] = Create a Doubly Linked List     |\n");
        printf("|    [ 2 ] = Display a Doubly Linked List    |\n");
        printf("|    [ 3 ] = Sort a Doubly Linked List       |\n");
        printf("|    [ 4 ] = Insert a Node                   |\n");
        printf("|    [ 5 ] = Delete a Node                   |\n");
        printf("|    [ 6 ] = Search a Number in the List     |\n");
        printf("|    [ 7 ] = Exit to Case Study Menu         |\n");
        printf("|                                            |\n");
        printf("==============================================\n");
        printf("|    Enter your choice: ");
        scanf("%d", &choice2);                                  // input
        switch (choice2) {                                      // switch case for input
        case 1:
            createDoubly(curr, &sort);                            // function call with argu curr and sort, in line 163 (tentative)
            break;
        case 2:
            if(head == NULL) {                                  // detection if there are existing doubly linked list
                printf("\n\nPlease create a Doubly Linked List first.\n");  // pwede mag prompt na "do you want to create one? "
                printf("Press any key to continue...");         // then create ng goto from here to createnode funct
                getch();
            }else                                               // if there is existing dll,
                displayDoubly(curr);                              // function call with argu curr, in line 209 (tentative)
            break;
        case 3:
            if(head == NULL) {                                  // detection if there are existing doubly linked list
                printf("\n\nPlease create a Doubly Linked List first.\n");
                printf("Press any key to continue...");
                getch();
            } else                                              // if there is existing dll,
                sortDoubly(curr, &sort);                          // function call with argu curr and sort, in line 254 (tentative)
            // printf("%d", sort);                                 // for confirmation of sort mode,  1 = ascending; 2 = descending
            break;
        case 4:
            if(head == NULL) {                                  // detection if there are existing doubly linked list
                printf("\n\nPlease create a Doubly Linked List first.\n");
                printf("Press any key to continue...");
                getch();
            }else if(sort == 0) {                               // detection if the existing doubly linked list is sorted
                printf("Sort the Doubly Linked List first.\n");
                printf("Press any key to continue...");
                getch();
            }else
                insertNode(curr, &sort);                        // function call with argu curr and sort, in line 316 (tentative)
            // getch(); dont need getch??
            break;
        case 5:
            if(head == NULL) {                                  // detection if there are existing doubly linked list
                printf("\n\nPlease create a Doubly Linked List first.\n");
                printf("Press any key to continue...");
                getch();
            }else
                deleteNode(curr);                               // function call with argu curr and sort, in line 316 (tentative)
            // getch(); dont need getch??
            break;
        case 6:
            if(head == NULL) {                                  // detection if there are existing doubly linked list
                printf("\n\nPlease create a Doubly Linked List first.\n");
                printf("Press any key to continue...");
            }else
                searchNode(curr);                               // function call with argu curr and sort, in line 316 (tentative)
            getch();
            break;
        case 7:
            head = NULL;
            break;
        default: // if input is not netween 1 - 7
            system("CLS");
            printf("\n\n  ===========  [ Warning! ]  ===========  \n");
            printf("      Please input a number from 1 - 7 only.");
            getch();
            break;
        }
    }
}

int createDoubly(struct Node *curr, int *sort) {                // create a doubly
    int i = 1;
    char choice3;
    if(head != NULL) {                                          // detection if doubly linked list is already existing
        system("cls");
        printf("======[ CREATING DOUBLY LINKED LIST ]=====\n\n");
        printf("Doubly Linked List has already been created.\n");
        printf("Do you want to create a new one(Y/N)? ");       //  prompted to create another one
        scanf(" %c", &choice3);
    }
    if((head == NULL) || (choice3 == 'Y' || choice3 == 'y')) {  // if there are no doubly linked list or
        system("cls");                                          // there is one but proceeded to create a new one
        head = curr = tail = temp = hold = NULL;                // setting nodes to NULL
        curr = (struct Node *)malloc(sizeof(struct Node));      // allocating for a node
        printf("======[ CREATING DOUBLY LINKED LIST ]=====\n\n");
        printf("Input integer for Node %d(0 to finish): ", i);
        scanf("%d", &curr->x);
        while(curr->x != 0) {                                   // until 0 is input, program will take input
            if(head == NULL) {                                  // iteration to connect nodes
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
            curr = (struct Node *) malloc(sizeof(struct Node));
            printf("Input integer for Node %d(0 to finish): ", i++);
            scanf("%d", &curr->x);
        }
        if(head == NULL) {                                      // if 0 is inputted on the first prompt, doubly list is not created
            printf("\n\nThe Doubly Linked List has not been created.");
            printf("\nReturning to Main Menu, press any key...");
            getch();
        }else {
            *sort = 0;                                          // doubly list is created and sort value is 0 (not sorted)
            printf("\n\nThe Doubly Linked List has been created.");
            printf("\nReturning to Main Menu, press any key...");
            getch();
        }
    }
}

int displayDoubly(struct Node *curr) {                          // Display doubly linked list
    int dsply;
    repdisp:                                                    // repeat display
    system("CLS");
    printf("=============[ DISPLAY MENU ]=============\n\n");   // display menu
    printf("  [ 1 ] = Normal Display\n");
    printf("  [ 2 ] = Reverse Display\n");
    printf("  [ 3 ] = Return to Main Menu\n\n");
    printf("What display method is in your mind? ");
    scanf("%d", &dsply);
    switch (dsply) {
    case 1:                                                     // normal display
        system("CLS");
        curr = head;
        printf("============[ NORMAL DISPLAY ]============\n\n");
        while(curr != NULL) {
            printf(" [ %d ] ", curr->x);
            curr = curr->next;
        }
        printf("\n\nReturning to Main Menu, press any key..."); // done displaying
        getch();
        break;
    case 2:                                                     // reverse display
        system("CLS");
        curr = tail;
        printf("============[ REVERSE DISPLAY ]===========\n\n");
        while(curr != NULL) {
            printf(" [ %d ] ", curr->x);
            curr = curr->prev;
        }
        printf("\n\nReturning to Main Menu, press any key..."); // done displaying
        getch();
        break;
    case 3:                                                     // return to main menu
        break;
    default:                                                    // input is not 1, 2, 3
        system("CLS");
        printf("=============[ DISPLAY MENU ]=============\n\n");
        printf("  ==========  [ Warning! ]  ==========  \n");
        printf("Please input a number from 1 - 3 only.");
        getch();
        goto repdisp;                                           // goto to display menu
    }
}

int sortDoubly(struct Node *curr, int *sort) {                  // sort doubly
    int choice4, temp1;
    repsort:                                                    // repeat sort
    system("CLS");
    printf("==============[ SORT  MENU ]==============\n\n");   // sort menu
    printf("  [ 1 ] = Ascending Sort\n");
    printf("  [ 2 ] = Descending Sort\n");
    printf("  [ 3 ] = Return to Main Menu\n\n");
    printf("What sort method is in your mind? ");
    scanf("%d", &choice4);
    switch (choice4) {
    case 1:
        *sort = 1;                                              // sort value is 1, ascending sort
        system("CLS");
        printf("============[ ASCENDING SORT ]============\n\n");
        printf("The program will begin sorting...\n");
        for(curr = head; curr != NULL ; curr = curr->next) {    // sort process for ascending
            for(temp = curr->next; temp != NULL; temp = temp->next) {
                if(curr->x > temp->x) {                         // balloon sort
                    temp1 = curr->x;
                    curr->x = temp->x;
                    temp->x = temp1;
                }
            }
            printf("...\n");                                    // mark if the process is working and if done processing
        }
        printf("The Doubly Linked List has been sorted.\n");
        printf("Press any key to continue...");
        getch();
        system("CLS");
        curr = head;
        printf("============[ ASCENDING SORT ]============\n\n");
        while(curr != NULL) {
            printf(" [ %d ] ", curr->x);
            curr = curr->next;
        }
        getch();
        break;
    case 2:
        *sort = 2;                                              // sort value is 2, descending sort
        system("CLS");
        printf("============[ DESCENDING SORT ]===========\n\n");
        printf("The program will begin sorting.\n");
        for(curr = head; curr != NULL ; curr = curr->next) {    // sort process for descending
            for(temp = curr->next; temp != NULL; temp = temp->next) {
                if(curr->x < temp->x) {                         // balloon sort
                    temp1 = curr->x;
                    curr->x = temp->x;
                    temp->x = temp1;
                }
            }
            printf("...\n");                                    // mark if the process is working and if done processing
        }
        printf("The Doubly Linked List has been sorted.\n");
        printf("Press any key to continue...");
        getch();
        system("CLS");
        curr = head;
        printf("============[ DESCENDING SORT ]===========\n\n");
        while(curr != NULL) {
            printf(" [ %d ] ", curr->x);
            curr = curr->next;
        }
        printf("\n\nReturning to Main Menu, press any key..."); // done displaying
        getch();
        break;
    break;
    case 3:                                                     // return to main menu
        break;
    default:
        system("CLS");                                          // if input is not between 1 - 3
        printf("==============[ SORT  MENU ]==============\n\n");
        printf("  ===========  [ Warning! ]  ==========  \n");
        printf("Please input a number from 1 - 3 only.");
        getch();
        goto repsort;                                           // repeat to sort menu
        break;
    }
}

int insertNode(struct Node *curr, int *sort) {                  // insert a node
    system("CLS");
    temp = hold = NULL;
    printf("=============[ INSERT A NODE ]============\n\n");
    temp = (struct Node *) malloc (sizeof(struct Node));
    printf("Enter a number(0 to terminate)? ");
    scanf("%d", &temp->x);
    while(temp->x != 0) {
        if(*sort == 1) {                                        // 1 means ascending in line 266
            if(temp->x <= head->x) {                            // ascending head node
                temp->next = head;                              // connecting nodes
                head->prev = temp;
                temp->prev = NULL;
                head = temp;
                printf("\nThe node was inserted as the head node.");
            }else if(head->x < temp->x && temp->x < tail->x) {  // ascending middle node
                curr = head;
                while(curr->x <= temp->x ) {                    // moving curr until temp(input) is larger than curr
                    curr = curr->next;
                }
                hold = curr->prev;                              // connecting nodes
                hold->next = temp;
                temp->prev = hold;
                temp->next = curr;
                curr->prev = temp;
                printf("\nThe node was inserted in the middle node.");
            }else {                                             // ascending tail node
                temp->next = NULL;                              // connecting nodes
                temp->prev = tail;
                tail->next = temp;
                tail = temp;
                printf("\nThe node was inserted as the tail node.");
            }
        }else {                                                 // descending sort in line 285
            if(temp->x >= head->x) {                            // descending head node
                temp->next = head;                              // connecting nodes
                head->prev = temp;
                temp->prev = NULL;
                head = temp;
                printf("\nThe node was inserted as the head node.");
            }else if(head->x > temp->x && temp->x > tail->x) {  // descending middle node
                curr = head;
                while(curr->x >= temp->x ) {                    // moving curr until temp(input) is smaller than curr
                    curr = curr->next;
                }
                hold = curr->prev;                              // connecting nodes
                hold->next = temp;
                temp->prev = hold;
                temp->next = curr;
                curr->prev = temp;
                printf("\nThe node was inserted in the middle node.");
            }else {                                             // descending tail node
                temp->next = NULL;                              // connecting nodes
                temp->prev = tail;
                tail->next = temp;
                tail = temp;
                printf("\nThe node was inserted as the tail node.");
            }
        }
        getch();
        system("CLS");
        printf("=============[ INSERT A NODE ]============\n\n");
        temp = (struct Node *) malloc (sizeof(struct Node));
        printf("Enter a number(0 to terminate)? ");             // Ask input from user
        scanf("%d", &temp->x);                                  // Will take input, unless it is 0
    }
}

int deleteNode(struct Node *curr) {                             // delete a node
    int delete, dltd = 0;
    curr = head;
    system("CLS");
    printf("============[ DELETE A NUMBER ]===========\n\n");
    printf("Enter a number to delete: ");
    scanf("%d", &delete);
    while (curr != NULL) {
        if (curr->x == delete) {
            if (curr == head && curr == tail) {
                // If the node to be deleted is both the head and tail,
                // update the head and tail pointers to NULL
                head = NULL;
                tail = NULL;
            } else if (curr == head) {
                // If the node to be deleted is the head, update the head pointer
                head = curr->next;
                head->prev = NULL;
            } else if (curr == tail) {
                // If the node to be deleted is the tail, update the tail pointer
                tail = curr->prev;
                tail->next = NULL;
            } else {
                // If the node to be deleted is neither the head nor the tail,
                // update the next and previous pointers of the adjacent nodes
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
            }
            free(curr);  // Free the memory of the node to be deleted
            printf("Node with data %d has been deleted.\n", delete);
            getch();
        }
        curr = curr->next;
    }
    printf("\nNode with data %d not found. Cannot delete.\n", delete);
    printf("Returning to Main Menu, press any key...");
    getch();
}

int searchNode(struct Node *curr) {                             // search a node
    char choice5 = 'Y';
    while (choice5 == 'Y' || choice5 == 'y') {
        int search, occr[100], counter = 0, nodeNumber = 1, i;
        system("CLS");
        printf("============[ SEARCH A NUMBER ]===========\n\n");
        printf("Enter a number to search: ");
        scanf("%d", &search);
        for(curr = head; curr != NULL; curr = curr->next) {
            if(curr->x == search) {
                occr[counter] = nodeNumber;
                counter++;
            }
            nodeNumber++;
        }
        if(counter != 0) {
            printf("\n%d is in the list. It is in node number/s", search);
            for (i = 0; i < counter; i++) {
                printf(" [ %d ] ", occr[i]);
            }
        }else
            printf("\n%d is not in the list.", search);
        printf("\n\nDo you want to search another number(Y/N)? ");
        scanf(" %c", &choice5);
    }
    printf("\nReturning to Main Menu, press any key...");
    getch();
}
