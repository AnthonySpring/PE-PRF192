#include <stdio.h>

// Hàm ki?m tra xem s? n có ph?i là luy th?a c?a 2 hay không
int isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num;
    printf("Nh?p m?t s? nguyên duong: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num)) {
        printf("%d là luy th?a c?a 2.\n", num);
    } else {
        printf("%d không ph?i là luy th?a c?a 2.\n", num);
    }

    return 0;
}
