#include <stdio.h>
void printRectangle(int n) {
	int i,j;
    // In ra h�ng dau ti�n cua h�nh chu nhat
    for ( i = 0; i < n; i++) {
        printf("* ");
    }
    printf("\n");

    // In ra c�c h�ng o giua 
    for ( i = 1; i < n - 2; i++) {
        printf("* ");
        // In ra c�c k� tu khoang trong o giua
	    for ( j = 0; j < n - 2; j++) {
            printf("  ");
        }
        printf("*\n");
    }

    // In ra h�ng cuoi c�ng cua h�nh chu nhat
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

