/*Sum of Digits Write a program where the user can input a non-negative integer. 
The program should then calculate and display the sum of its digits.*/
#include <stdio.h>
int main() {
    int num, sum = 0, digit;
    // Nhap mot so nguy�n kh�ng �m tu nguoi d�ng
    do {
        scanf("%d", &num);
        if (num < 0);
    } while (num < 0);
    // T�nh tong c�c chu so cua so nguy�n
    int originalNum = num;
    while (num > 0) {
        digit = num % 10; // Lay chi so cuoi c�ng
        sum += digit; // Cong chi so n�y v�o tung
        num /= 10; // Loai bo chi so cuoi c�ng
    }

    // Hien thi tong c�c chu so
    printf("%d\n", sum);
    return 0;
}
