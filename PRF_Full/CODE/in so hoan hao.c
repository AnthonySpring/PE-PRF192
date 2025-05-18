#include <stdio.h>
#include <stdbool.h>

bool check(int a){
    int sum = 0,i; // initialize sum variable
    for( i=1;i<=a/2;i++){ // loop from 1 to a/2
        if(a%i==0)  // if i is a divisor of a
            sum += i; // add i to the sum
    }
    if(sum==a) return true; // if sum is equal to a, then a is a perfect number
    return false; // otherwise, a is not a perfect number
}

int main(void) {
    int n,i;
    scanf("%d", &n);
    printf("Perfect numbers from 1 to %d are: ", n);
    for( i=1; i<=n; i++){
        if(check(i)){
            printf("%d ", i);
        }
    }
    return 0;
}
