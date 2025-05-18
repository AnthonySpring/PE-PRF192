#include <stdio.h>

// H�m ki?m tra xem s? n c� ph?i l� luy th?a c?a 2 hay kh�ng
int isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num;
    printf("Nh?p m?t s? nguy�n duong: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num)) {
        printf("%d l� luy th?a c?a 2.\n", num);
    } else {
        printf("%d kh�ng ph?i l� luy th?a c?a 2.\n", num);
    }

    return 0;
}
