/*Sum of Digits Write a program where the user can input a non-negative integer. 
The program should then calculate and display the sum of its digits.*/
#include <stdio.h>
int main() {
    int num, sum = 0, digit;
    // Nhap mot so nguyên không âm tu nguoi dùng
    do {
        scanf("%d", &num);
        if (num < 0);
    } while (num < 0);
    // Tính tong các chu so cua so nguyên
    int originalNum = num;
    while (num > 0) {
        digit = num % 10; // Lay chi so cuoi cùng
        sum += digit; // Cong chi so này vào tung
        num /= 10; // Loai bo chi so cuoi cùng
    }

    // Hien thi tong các chu so
    printf("%d\n", sum);
    return 0;
}
