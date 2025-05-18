#include <stdio.h>

void fibonacci(int n){
    int a = 0;
    int b = 1;
    printf("%d %d", a, b);
    while(b <= n){
        printf(" %d", b);
        int c = a + b;
        a = b;
        b = c;
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("Fibonacci numbers from 1 to %d are: ", n);
    fibonacci(n);
    return 0;
}
