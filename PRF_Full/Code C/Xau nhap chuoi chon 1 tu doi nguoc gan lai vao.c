#include <stdio.h>
#include <string.h>

// Function to replace all occurrences of a substring with another substring
void replaceSubstring(char *str, const char *old, const char *new) {
    int oldLen = strlen(old);
    int newLen = strlen(new);
    int i, j, k;

    for (i = 0; str[i] != '\0';) {
        j = 0;
        k = i;

        // Find occurrence of old substring
        while (str[k] == old[j] && old[j] != '\0') {
            k++;
            j++;
        }

        // If old substring is found
        if (old[j] == '\0') {
            // Replace old substring with new substring
            for (j = 0; j < newLen; j++) {
                str[i + j] = new[j];
            }
            // Adjust the position after replacement
            i += newLen;
        } else {
            // Move to the next character in the string
            i++;
        }
    }
}

// Function to reverse a string
void reverseString(char* str) {
    int i,len = strlen(str);
    for( i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char o[100], p[100], inverseP[100];
    
    printf("Enter the long string (o): ");
    fgets(o, sizeof(o), stdin);
    printf("Enter the short string (p): ");
    fgets(p, sizeof(p), stdin);

    // Remove newline characters
    o[strcspn(o, "\n")] = '\0';
    p[strcspn(p, "\n")] = '\0';

    // Reverse the short string to get its inverse
    strcpy(inverseP, p);
    reverseString(inverseP);

    // Replace occurrences of 'p' in 'o' with the inverse of 'p'
    replaceSubstring(o, p, inverseP);

    printf("OUTPUT: %s\n", o);

    return 0;
}

