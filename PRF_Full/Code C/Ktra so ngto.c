#include <stdio.h>
int isprime(int n){
    //flag = 0 => không ph?i s? nguyên t?
    //flag = 1 => s? nguyên t?
    
    int flag=1;

    if (n <2) return 0; /*S? nh? hon 2 không ph?i s? nguyên t? => tr? v? 0*/
    
    /*S? d?ng vòng l?p while d? ki?m tra có t?n t?i u?c s? nào khác không*/
    int i = 2;
    while(i <n){
        if( n%i==0 ) {
            flag = 0;
            break; /*Ch? c?n tìm th?y 1 u?c s? là d? và thoát vòng l?p*/
        }
        i++;
    }

    return flag;
}

int main(void){
    int n;
 
    printf("Nhap so tu nhien= ");
    scanf("%d",&n);

    int check = isprime(n);
 
    if( check == 1 ) printf("%d la so nguyen to\n", n);
    else printf("%d khong phai la so nguyen to\n", n);
    return 0;
}

