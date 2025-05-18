#include <stdio.h>
#include <math.h> // S? d?ng hàm pow() d? tính luy th?a

// Hàm chuy?n d?i t? h? co s? 2 sang h? co s? 10
int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

// Hàm chuy?n d?i t? h? co s? 2 sang h? co s? 16
void binaryToHexadecimal(long long binaryNumber) {
    int remainder, hexDigit, i = 1;
    char hexadecimalNumber[20];
    int j;
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10000;
        switch (remainder) {
            case 0: hexDigit = 0; break;
            case 1: hexDigit = 1; break;
            case 10: hexDigit = 2; break;
            case 11: hexDigit = 3; break;
            case 100: hexDigit = 4; break;
            case 101: hexDigit = 5; break;
            case 110: hexDigit = 6; break;
            case 111: hexDigit = 7; break;
            case 1000: hexDigit = 8; break;
            case 1001: hexDigit = 9; break;
            case 1010: hexDigit = 'A'; break;
            case 1011: hexDigit = 'B'; break;
            case 1100: hexDigit = 'C'; break;
            case 1101: hexDigit = 'D'; break;
            case 1110: hexDigit = 'E'; break;
            case 1111: hexDigit = 'F'; break;
        }
        hexadecimalNumber[i++] = hexDigit;
        binaryNumber /= 10000;
    }

    printf("S? h? co s? 16 tuong ?ng là: ");
    for ( j = i - 1; j > 0; j--)
        printf("%c", hexadecimalNumber[j]);
    printf("\n");
}

int main() {
    long long binaryNumber;

    printf("Nh?p s? h? co s? 2: ");
    scanf("%lld", &binaryNumber);

    int decimalNumber = binaryToDecimal(binaryNumber);
    printf("S? h? co s? 10 tuong ?ng là: %d\n", decimalNumber);

    

    return 0;
}

