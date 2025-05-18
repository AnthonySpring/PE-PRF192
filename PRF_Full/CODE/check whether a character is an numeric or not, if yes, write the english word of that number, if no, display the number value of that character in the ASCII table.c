// 8: Write a C program to check whether a character is an numeric or not, if yes, write the english word of that number, if no, display the number value of that character in the ASCII table

#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit
    if (ch >= '0' && ch <= '9') {
        printf("%c is a numeric character. ", ch);
        switch (ch) {
            case '0':
                printf("It is zero.\n");
                break;
            case '1':
                printf("It is one.\n");
                break;
            case '2':
                printf("It is two.\n");
                break;
            case '3':
                printf("It is three.\n");
                break;
            case '4':
                printf("It is four.\n");
                break;
            case '5':
                printf("It is five.\n");
                break;
            case '6':
                printf("It is six.\n");
                break;
            case '7':
                printf("It is seven.\n");
                break;
            case '8':
                printf("It is eight.\n");
                break;
            case '9':
                printf("It is nine.\n");
                break;
            default:
                // This default case is technically not necessary since we cover all digits 0-9
                break;
        }
    } else {
        // If it's not a numeric character, print its ASCII value
        printf("%c is not a numeric character. Its ASCII value is %d.\n", ch, (int)ch);
    }

    return 0;
}

