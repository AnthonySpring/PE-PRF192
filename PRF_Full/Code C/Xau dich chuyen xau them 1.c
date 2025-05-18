#include <stdio.h>
#include <stdlib.h>

void string(char *old_str, char *new_str) {
    int i = 0;
    while (old_str[i] != '\0') {
        new_str[i] = old_str[i] + 1;
        i++;
    }
    new_str[i] = '\0';
}

int main() {
    char old_str[100];
    char new_str[100];
    
    printf("Enter string: ");
    scanf("%s", old_str);

    printf("The old string: \"%s\"\n", old_str);

    string(old_str, new_str);

    printf("The new string: \"%s\"\n", new_str);

    return 0;
}

