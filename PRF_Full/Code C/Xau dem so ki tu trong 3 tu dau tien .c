#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; // Assuming maximum length of the string
    char *token;
    int wordCount = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Tokenize the string into words
    token = strtok(str, " \n");

    // Count characters in the first three words
    while (token != NULL && wordCount < 3) {
        printf("Number of characters in word %d: %lu\n", wordCount + 1, strlen(token));
        token = strtok(NULL, " \n");
        wordCount++;
    }

    return 0;
}

