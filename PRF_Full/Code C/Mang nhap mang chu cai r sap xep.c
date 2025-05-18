#include <stdio.h>
#include <stdlib.h>

void nhapMang(char a[], int *n) {
    int i;
	//printf("Nhap so luong phan tu: ");
    scanf("%d", n);
    //printf("Nhap mang:\n");
    for (i = 0; i < *n; i++) {
        //printf("a[%d] = ", i);
        scanf(" %c", &a[i]);
    }
}

void xuatMang(char a[], int n) {
    int i;
	printf("\nXuat mang:\n");
    for ( i = 0; i < n; i++) {
        printf("%c ", a[i]);
    }
    printf("\n");
}

void sapXep(char a[], int n) {
    int i,j;
	for (i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                char tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

int main() {
    system("cls");

    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    char a[100];
    int n;
    nhapMang(a, &n);
    sapXep(a, n);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    xuatMang(a, n);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}

