#include <stdio.h>
#include <stdbool.h>

bool check(int a){
	int i; 
    if(a < 2) return false; // numbers less than 2 are not prime
    for( i=2; i*i<=a; i++){ // loop from 2 to sqrt(a)
        if(a%i==0) return false; // if a is divisible by i, then it's not prime
    }
    return true; // otherwise, a is prime
}

int main(void) {
    int n,i;
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are: ", n);
    for( i=1; i<=n; i++){
        if(check(i)){
            printf("%d ", i);
        }
    }
    return 0;
}
