#include <stdio.h>

int isPrime(int n) {
    int i;
    
    if (n < 2) 
        return 0; // 0 và 1 không ph?i là s? nguyên t?
    
    for (i = 2; i < n; i++) {
        if (n % i == 0) 
            return 0; // N?u n chia h?t cho m?t s? khác 1 và chính nó, nó không ph?i là s? nguyên t?
    }
    
    return 1; // N?u không tìm th?y b?t k? u?c s? nào, nó là s? nguyên t?
}

int main() {
    int n, check;
    
    do {
        printf("Nhap n (n >= 2): ");
        scanf("%d", &n);
        
        if (n < 2) 
            printf("Nhap sai, vui long nhap lai!\n");
    } while (n < 2);
    
    check = isPrime(n);
    if (check == 1) 
        printf("%d là so nguyên to\n",n);
    else 
        printf("%d khong phai là so nguyen to\n",n);    
    return 0;
}

