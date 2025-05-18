#include <stdio.h>
#include <stdbool.h>

bool check(int a){
    int reversed = 0;
    int original = a;
    while(a > 0){
        reversed = reversed * 10 + (a % 10);
        a /= 10;
    }
    return reversed == original;
}

int main(void) {
    int n,i;
    scanf("%d", &n);
    printf("Palindrome numbers from 1 to %d are: ", n);
    for( i=1; i<=n; i++){
        if(check(i)){
            printf("%d ", i);
        }
    }
    return 0;
}
