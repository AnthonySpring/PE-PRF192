#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseAndCapitalize(char *str) {
    int length = strlen(str);
    int i, j;

    // Reverse the entire string
    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Capitalize the first character of each word
    for (i = 0; i < length; i++) {
        // If the current character is a letter and the previous character is not a letter or the start of the string
        if ((i == 0 || !isalpha(str[i - 1])) && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char s[100];

    // Input string
    printf("Enter a string (length < 100): ");
    fgets(s, sizeof(s), stdin);

    // Remove newline character from fgets
    s[strcspn(s, "\n")] = '\0';

    // Reverse and capitalize the string
    reverseAndCapitalize(s);

    // Output the result
    printf("Reversed string with first character of each word capitalized: %s\n", s);

    return 0;
}

