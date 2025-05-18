//check palindrome 
#include <stdio.h>
#include <string.h>

// Hàm kiem tra xem mot chuoi có phai là Palindrome hay không
int isPalindrome(char *str) {
    int len = strlen(str);
    int i, j;

    // Duyet qua tung ki tu cua chuoi
    for (i = 0, j = len - 1; i < j; i++, j--) {
        // Neu các ki tu không khop nhau
        if (str[i] != str[j]) {
            return 0; // Tra ve 0, không phai Palindrome
        }
    }
    return 1; // Tra ve 1, là Palindrome
}

int main() {
    char str[100];

    // Nhap chuoi tu nguoi dùng
    printf("%s",str);
    scanf("%s",&str);

    // Kiem tra xem chuoi có phai là Palindrome không
    if (isPalindrome(str)) {
        printf("1\n", str);
    } else {
        printf("0\n", str);
    }

    return 0;
}
