#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    char ch;
    printf("Enter a lowercase character:");
    ch = getchar();
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    printf("Uppercase character:%c", toupper(ch));

    return 1;
}
