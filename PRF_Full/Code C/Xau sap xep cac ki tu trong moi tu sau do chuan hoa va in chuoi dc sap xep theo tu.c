#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to compare characters for qsort
int compareChars(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

// Function to sort characters in a word
void sortCharacters(char *word) {
    size_t len = strlen(word);
    qsort(word, len, sizeof(char), compareChars);
}

int main() {
	int i;
    char str[1000]; // Assuming maximum length of the string
    char *token;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Tokenize the string into words
    token = strtok(str, " \n");
    while (token != NULL) {
        // Normalize the word to lowercase
        for ( i = 0; token[i]; i++) {
            token[i] = tolower(token[i]);
        }

        // Sort the characters in the word
        sortCharacters(token);

        // Print the sorted word
        printf("%s ", token);

        // Get the next word
        token = strtok(NULL, " \n");
    }

    return 0;
}

