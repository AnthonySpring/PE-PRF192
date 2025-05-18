#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 3
#define MAX_LENGTH 20

int main() {
    // Declare and initialize an array of strings
    char strings[MAX_STRINGS][MAX_LENGTH] = {
        "First string",
        "Second string",
        "Third string"
    };
    int i;
    // Print the array of strings
    printf("Array of Strings:\n");
    for ( i = 0; i < MAX_STRINGS; i++) {
        printf("%d: %s\n", i + 1, strings[i]);
    }

    // Modify a string
    strcpy(strings[1], "Modified string");

    // Print the modified array of strings
    printf("\nModified Array of Strings:\n");
    for (i = 0; i < MAX_STRINGS; i++) {
        printf("%d: %s\n", i + 1, strings[i]);
    }

    return 0;
}

