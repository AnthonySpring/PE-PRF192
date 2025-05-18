#include <stdio.h>

int main() {
    int x = 5;
    char c;

    printf("Enter x = ");
    scanf("%d", &x);

    // Consume the newline character left in the input buffer
    getchar();

    printf("Calculate square? (Y/N): ");
    c = getchar();

    if (c == 'Y' || c == 'y')
        printf("sqr = %d", x*x);

    return 0;
}
