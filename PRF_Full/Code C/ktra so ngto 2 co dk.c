#include <stdio.h>

int isPrime(int n) {
    int i;
    
    if (n < 2) 
        return 0; // 0 v� 1 kh�ng ph?i l� s? nguy�n t?
    
    for (i = 2; i < n; i++) {
        if (n % i == 0) 
            return 0; // N?u n chia h?t cho m?t s? kh�c 1 v� ch�nh n�, n� kh�ng ph?i l� s? nguy�n t?
    }
    
    return 1; // N?u kh�ng t�m th?y b?t k? u?c s? n�o, n� l� s? nguy�n t?
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
        printf("%d l� so nguy�n to\n",n);
    else 
        printf("%d khong phai l� so nguyen to\n",n);    
    return 0;
}

