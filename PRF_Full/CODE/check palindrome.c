//check palindrome 
#include <stdio.h>
#include <string.h>

// H�m kiem tra xem mot chuoi c� phai l� Palindrome hay kh�ng
int isPalindrome(char *str) {
    int len = strlen(str);
    int i, j;

    // Duyet qua tung ki tu cua chuoi
    for (i = 0, j = len - 1; i < j; i++, j--) {
        // Neu c�c ki tu kh�ng khop nhau
        if (str[i] != str[j]) {
            return 0; // Tra ve 0, kh�ng phai Palindrome
        }
    }
    return 1; // Tra ve 1, l� Palindrome
}

int main() {
    char str[100];

    // Nhap chuoi tu nguoi d�ng
    printf("%s",str);
    scanf("%s",&str);

    // Kiem tra xem chuoi c� phai l� Palindrome kh�ng
    if (isPalindrome(str)) {
        printf("1\n", str);
    } else {
        printf("0\n", str);
    }

    return 0;
}
