#include <stdio.h>
#include <ctype.h>
//cho chuoi chay qua src sau do loc truyen vao dst
void removeNonAlphabetCharacters(char *s) {
    char *src = s;
    char *dst = s;
    while (*src) {
        if (isalpha(*src)) {
            *dst++ =*src;//tranh ghi de
        }
        src++;//chuyen sang ki tu tiep
    }		
    *dst = '\0';//ket thuc chuoi
}
int main() {
    char input_string[101];
    printf("Enter a string (max 100 characters): ");
//    fgets(input_string, sizeof(input_string), stdin);
//
//    // Remove trailing newline if present
//    if (input_string[strlen(input_string) - 1] == '\n') {
//        input_string[strlen(input_string) - 1] = '\0';
//    }
    gets(input_string);
    removeNonAlphabetCharacters(input_string);
    printf("OUTPUT: %s\n", input_string);

    return 0;
}

