#include <stdio.h>
void printRectangle(int n) {
	int i,j;
    // In ra hàng dau tiên cua hình chu nhat
    for ( i = 0; i < n; i++) {
        printf("* ");
    }
    printf("\n");

    // In ra các hàng o giua 
    for ( i = 1; i < n - 2; i++) {
        printf("* ");
        // In ra các ký tu khoang trong o giua
	    for ( j = 0; j < n - 2; j++) {
            printf("  ");
        }
        printf("*\n");
    }

    // In ra hàng cuoi cùng cua hình chu nhat
    if (n > 1) {
        for ( i = 0; i < n; i++) {
            printf("* ");
        }
        printf("\n");
    }
}


int main() {
    int n;
    scanf("%d", &n);
    printRectangle(n);
    return 0;
}

