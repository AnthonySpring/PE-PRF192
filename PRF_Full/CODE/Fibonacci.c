/*Design a program that allows the user to input a non-negative integer n, 
and then displays the first n numbers of the Fibonacci sequence.*/
#include <stdio.h>

// H�m t�nh day Fibonacci
void fibonacci(int n) {
    int first = 0, second = 1, next, c;

    printf("%d:\n", n);

    for (c = 0; c < n; c++) {
        if (c <= 1)
            next = c;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }
}

int main() {
    int n;

    // Nhap so nguy�n kh�ng �m tu nguoi d�ng
    do {
        scanf("%d", &n);
        if (n < 0)
            printf("Nhap mot so kh�ng �m.\n");
    } while (n < 0);

    // Hien thi n so dau ti�n cua day Fibonacci
    fibonacci(n);

    return 0;
}
