#include <stdio.h>

void Max(int *count, int *max);

int main() {
    int count, max;
    Max(&count, &max);
    printf("So luong so nguyen da nhap: %d\n", count);
    printf("Gia tri lon nhat trong day: %d\n", max);
    return 0;
}

void Max(int *count, int *max) {
    int number;
    *count = 0;
    *max = 0;

    printf("Nhap vao mot day so nguyen (nhap 0 de ket thuc):\n");
    do {
        scanf("%d", &number);
        if (number != 0) {
            (*count)++;
            if (number > *max) {
                *max = number;
            }
        }
    } while (number != 0);
}

