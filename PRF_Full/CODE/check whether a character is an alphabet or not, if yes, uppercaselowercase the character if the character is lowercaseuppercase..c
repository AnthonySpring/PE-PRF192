// 7: Write a C program to check whether a character is an alphabet or not, if yes, uppercase/lowercase the character if the character is lowercase/uppercase.

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;


    printf("Enter a character: ");
    scanf("%c", &ch);


    if (isalpha(ch)) {
        if (isupper(ch)) {
            printf("%c is an uppercase alphabet. Converting to lowercase: %c\n", ch, tolower(ch));
        }
        else if (islower(ch)) {
            printf("%c is a lowercase alphabet. Converting to uppercase: %c\n", ch, toupper(ch));
        }
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}

