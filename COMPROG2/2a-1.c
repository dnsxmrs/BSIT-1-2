#include<stdio.h>
#include<string.h>

int main () {
    char word[20], dword[20];
    int i, len;

    printf("-------     PALINDROME DETECTOR     -------\n");
    printf("Enter your word(max of 20 char): ");
    scanf("%s", &word);

    len = strlen(word);
    for (i = 0; i < len; i++) {
        dword[i] = word[i];
    }

    if (stricmp(strrev(word), dword) == 0) {
        printf("\n%s is a Palindrome", dword);
    } else {
        printf("\n%s is Not a Palindrome", dword);
    }

	return 0;
}