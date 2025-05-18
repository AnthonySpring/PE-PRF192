#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    // nhap du lieu don
    int m;
    scanf("%d", &m);

    double d;
    scanf("%lf", &d);

    char c, e;
    fflush(stdin); // xoa buffer - dac biet \n
    scanf("%c", &c);
    fflush(stdin); 
    scanf("%c", &e);

    char s[100];
    gets(s);

    // nhap du lieu mang
    int n = 10;
    // scanf("%d", &n); neu can
    int aint[n];
    int i;
    for (i=0; i<n; i++) {
        scanf("%d", &aint[i]);
    }

    double adouble[n];
    for (i=0; i<n; i++) {
        scanf("%lf", &adouble[i]);
    }

    char achar[n];
    for (i=0; i<n; i++) {
        fflush(stdin); // xoa \n
        scanf("%c", &achar[i]);
    }

    char astr[n][100];
    for (i=0; i<n; i++) {
        gets(astr[i]);
    }

    // nhap du lieu mang 2 chieu
    int row, col;
    row = 3; 
    col = 3;
    // scanf("%d", &row); neu can
    // scanf("%d", &col); neu can
    int a2d[row][col];
    int r1, c1;
    for (r1=0; r1<row; r1++) {
        for (c1=0; c1<col; c1++) {
            scanf("%d", &a2d[r1][c1]);
        }
    }

    // OUTPUT:

    // xu ly
    // basic computations
    // opeartors
    // +, -, *, /, %
    // n%2==0 // even
    // n%2==1 // odd
    // >, <, >=, <=, ==, !=
    // &&, ||, !

    // basic logics
    if (n%2==0) {
        printf("even");
    } else {
        printf("odd");
    }

    if (n<5) {
        printf("failed");
    } else if (n<8) {
        printf("avg good");
    } else {
        printf("very good");
    }
    
    switch (n)
    {
    case 1:
        printf("n = 1");
        break;
    case 2:
        printf("n = 2");
        break;
    default:
        printf("n = con lai");
        break;
    }

    // loop
    // in cac phan tu le nho hon n
    for (i=0; i<n; i++) {
        if (i%2==1) {
            printf("%d ", i);
        }
    }

    // tinh tong cac digit cua n
    // 12345
    // sum = 5 + 4 + 3 + 2 + 1
    int sum = 0;
    while (n>0) {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    // xuat mang array
    for (i=0; i<n; i++) {
        printf("%d ", aint[i]);
    }

    for (i=0; i<n; i++) {
        printf("%lf ", adouble[i]);
    }

    for (i=0; i<n; i++) {
        printf("%c ", achar[i]);
    }

    for (i=0; i<n; i++) {
        printf("%s ", astr[i]);
    }

    // tich cac phan tu le
    int prod = 1;
    for (i=0; i<n; i++) {
        if (aint[i]%2==1) {
            prod = prod * aint[i];
        }
    }

    // tim max

    // tim min

    // tim max so chan

    // tim max so le

    // sap xep

    // phan tu unique - duy nhat

    // phan tu duplicate - lap lai

    // dem co nhieu phan tu x

    // phan tu lap lai nhieu nhat

    // phan tu so nguyen to - prime number

    // phan tu so fibonaci 

    // tinh tong cac phan tu tren duong cheo chinh
    int sumdiagonal = 0;
    for (r1=0; r1<row; r1++) {
        for (c1=0; c1<col; c1++) {
            if (r1 == c1) {
                sumdiagonal += a2d[r1][c1];
            }
        }
    }

    sumdiagonal = 0;
    for (r1=0; r1<row; r1++) {
        sumdiagonal += a2d[r1][r1];
    }

    // char, array char
    // thu vien ctype.h
    // isdigit, isalpha, isspace, ispunctuation,
    
    // sap xep a - z, a < b


    // string - chuoi
    char str[100]; // chuoi cha
    char substr[100]; // chuoi con
    // thu vien string.h
    // strstr(str, substr); // tim chuoi substr co trong str hay khong,
    // tra ve NULL khi khong tim thay; 
    // tim thay thi tra ve dia chi (char*) dau tien tim thay
    // strchr(str, 'e');

    char arrayStr[n][100];
    // {"dung", "duy", "ngan", "thu"}
    char subs = "ng";
    int count = 0;
    for (i=0; i<n; i++) {
        if (strstr(arrayStr[i], subs)!=NULL) {
            count++;
        }
    }

    // strcmp("a", "b"); => -1
    // strcmp("a", "a"); => 0
    // strcmp("b", "a"); => 1

    // sap xep mang string
    // strcmp() trong dieu kien sap xep

    // doi cho trong sap xep
    // phai dung strcpy();
}