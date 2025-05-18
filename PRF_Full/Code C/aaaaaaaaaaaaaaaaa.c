#include <stdio.h>

int main() {
    int number; // Bi?n d? luu tr? s? ngu?i dùng nh?p vào
    int count = 0; // Bi?n d? d?m s? lu?ng s? th?a mãn di?u ki?n
    int sum = 0; // Bi?n d? tính t?ng c?a các s? th?a mãn di?u ki?n

    do {
        // Yêu c?u ngu?i dùng nh?p vào m?t s?
        printf("Enter an integer in [1-10] (Press 0 to quit): ");
        scanf("%d", &number);

        // Ki?m tra xem s? nh?p vào có n?m trong kho?ng [-10, 10] hay không
        if (number < -10 || number > 10) {
            printf("Incorrect input, try again!\n");
        } else if (number != 0) { // Ki?m tra n?u s? nh?p vào là 0 thì không c?n ki?m tra và tính toán n?a
            count++; // Tang bi?n d?m s? lu?ng s? th?a mãn di?u ki?n
            sum += number; // C?ng s? vào t?ng
        }
    } while (number != 0); // L?p cho d?n khi ngu?i dùng nh?p s? 0

    // In ra s? lu?ng s? th?a mãn di?u ki?n và t?ng c?a chúng
    printf("Number of integers entered: %d\n", count);
    printf("Sum: %d\n", sum);

    return 0;
}


 
