#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct record {
    float quiz[3];
    float saverage;
};

struct stud {
    char sno[16];
    char sname[11];
    struct record stud_grds;
};

int main() {
    int i, j;
    float temp, qaverage[4];
    struct stud stud_rec[5];

    for (i = 0; i < 5; i++) {
        printf("\nEnter your Student Number (2022-00000-CM-00): ");
        scanf("%s", stud_rec[i].sno);
        printf("Enter your Student Name (First Name only): ");
        scanf(" %s", stud_rec[i].sname);

        for (j = 0; j < 3; j++) {
            printf("Enter your Quiz %d score: ", j + 1);
            scanf("%f", &temp);
            if (temp <= 100.00) {
                stud_rec[i].stud_grds.quiz[j] = temp;
                stud_rec[i].stud_grds.saverage += stud_rec[i].stud_grds.quiz[j];
            } else {
                printf("Invalid input, please input less than 100. TRY AGAIN!\n");
                j--;
            }
        }
        stud_rec[i].stud_grds.saverage = stud_rec[i].stud_grds.saverage / 3;
    }

    for (i = 0; i < 3; i++) {
        temp = 0;
        for (j = 0; j < 5; j++) {
            temp += stud_rec[j].stud_grds.quiz[i];
        }
        qaverage[i] = temp / 5;
    }

    temp = 0;
    for (i = 0; i < 5; i++) {
        temp += stud_rec[i].stud_grds.saverage;
    }
    qaverage[3] = temp / 5;
    getch();
    // system("cls");
    printf("             POLYTECHNIC UNIVERSITY OF THE PHILIPPINES\n");
    printf("                         QUEZON CITY BRANCH\n\n");
    printf("                              BSIT 1-2\n\n");
    printf("STUDENT NO.     STUDENT NAME  QUIZ#1  QUIZ#2  QUIZ#3  GRADE AVERAGE\n\n");

    for (i = 0; i < 5; i++) {
        printf("%15s %12s", stud_rec[i].sno, stud_rec[i].sname);
        for (j = 0; j < 3; j++) {
            printf("  %6.2f", stud_rec[i].stud_grds.quiz[j]);
        }
        printf("  %13.2f", stud_rec[i].stud_grds.saverage);
        printf("\n");
    }
    printf("-------------------------------------------------------------------\n");
    printf("AVERAGE                     ");
    for (j = 0; j < 3; j++) {
        printf("  %6.2f", qaverage[j]);
    }
    printf("  %13.2f", qaverage[3]);
    return 0;
}