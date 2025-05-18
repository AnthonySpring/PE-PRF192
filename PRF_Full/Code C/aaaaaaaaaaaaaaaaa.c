#include <stdio.h>

int main() {
    int number; // Bi?n d? luu tr? s? ngu?i d�ng nh?p v�o
    int count = 0; // Bi?n d? d?m s? lu?ng s? th?a m�n di?u ki?n
    int sum = 0; // Bi?n d? t�nh t?ng c?a c�c s? th?a m�n di?u ki?n

    do {
        // Y�u c?u ngu?i d�ng nh?p v�o m?t s?
        printf("Enter an integer in [1-10] (Press 0 to quit): ");
        scanf("%d", &number);

        // Ki?m tra xem s? nh?p v�o c� n?m trong kho?ng [-10, 10] hay kh�ng
        if (number < -10 || number > 10) {
            printf("Incorrect input, try again!\n");
        } else if (number != 0) { // Ki?m tra n?u s? nh?p v�o l� 0 th� kh�ng c?n ki?m tra v� t�nh to�n n?a
            count++; // Tang bi?n d?m s? lu?ng s? th?a m�n di?u ki?n
            sum += number; // C?ng s? v�o t?ng
        }
    } while (number != 0); // L?p cho d?n khi ngu?i d�ng nh?p s? 0

    // In ra s? lu?ng s? th?a m�n di?u ki?n v� t?ng c?a ch�ng
    printf("Number of integers entered: %d\n", count);
    printf("Sum: %d\n", sum);

    return 0;
}


 
