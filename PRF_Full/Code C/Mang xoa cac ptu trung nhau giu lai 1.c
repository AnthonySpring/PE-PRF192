#include <stdio.h>

#define MAX_SIZE 100 // Gi? s? kích thu?c t?i da c?a m?ng là 100

int main() {
    int arr[MAX_SIZE];
    int uniqueArr[MAX_SIZE];
    int numElements, uniqueNumElements = 0;
    int i,j;
    // Nh?p s? lu?ng ph?n t? trong m?ng
    printf("Nh?p s? lu?ng ph?n t? trong m?ng: ");
    scanf("%d", &numElements);

    // Nh?p các ph?n t? c?a m?ng
    printf("Nh?p các ph?n t? c?a m?ng: ");
    for ( i = 0; i < numElements; i++) {
        scanf("%d", &arr[i]);
    }

    // Duy?t qua m?ng và gi? l?i duy nh?t m?t ph?n t? c?a m?i giá tr?
    for ( i = 0; i < numElements; i++) {
        int isDuplicate = 0;
        // Ki?m tra xem ph?n t? có b? trùng không
        for ( j = 0; j < uniqueNumElements; j++) {
            if (uniqueArr[j] == arr[i]) {
                isDuplicate = 1;
                break;
            }
        }
        // N?u không trùng, thêm ph?n t? vào m?ng duy nh?t
        if (!isDuplicate) {
            uniqueArr[uniqueNumElements++] = arr[i];
        }
    }

    // In ra m?ng sau khi lo?i b? các ph?n t? trùng nhau
    printf("M?ng sau khi lo?i b? các ph?n t? trùng nhau: ");
    for ( i = 0; i < uniqueNumElements; i++) {
        printf("%d ", uniqueArr[i]);
    }
    printf("\n");

    return 0;
}

