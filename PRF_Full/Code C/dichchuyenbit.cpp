#include <stdio.h>

int main() {
    int num = 15; // S? ban ??u
    int shift_right = 2; // D?ch ph?i 2 bit
    int shift_left = 3; // D?ch trái 3 bit

    // D?ch ph?i
    int shifted_right = num >> shift_right;

    // D?ch trái
    int shifted_left = num << shift_left;

    printf("S? ban ??u: %d\n", num);
    printf("S? sau khi d?ch ph?i %d bit: %d\n", shift_right, shifted_right);
    printf("S? sau khi d?ch trái %d bit: %d\n", shift_left, shifted_left);

    return 0;
}
