#include <stdio.h>

// H�m nh?p m?ng t? ngu?i d�ng
void inputArray(int arr[], int size) {
	int i;
    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < size; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// H�m in m?ng
void printArray(int arr[], int size) {
	int i;
    printf("Mang vua nhap la:\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// H�m x�a ph?n t? ? v? tr� p ra kh?i m?ng
void removeElement(int arr[], int *size, int pos) {
    int i;
	if (pos < 1 || pos > *size) {
        printf("V? tr� kh�ng h?p l?.\n");
        return;
    }

    for (i = pos - 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

int main() {
    int n, p;

    printf("Nhap so phan tu cua mang (0 < n < 10): ");
    scanf("%d", &n);
    if (n <= 0 || n >= 10) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    int arr[n];

    // G?i h�m nh?p m?ng
    inputArray(arr, n);

    // G?i h�m in m?ng
    printArray(arr, n);

    printf("Nhap vi tri phan tu can xoa (0 < p <= %d): ", n);
    scanf("%d", &p);
    if (p <= 0 || p > n) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }

    // G?i h�m x�a ph?n t?
    removeElement(arr, &n, p);

    // In m?ng sau khi x�a
    printArray(arr, n);

    return 0;
}

