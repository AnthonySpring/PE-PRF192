#include<stdio.h>
#define MAX_SIZE 100 // Ð?nh nghia kích thu?c t?i da cho m?ng
int main(){
	int sum=0,count=0,n,j;
	int valid_numbers[MAX_SIZE]; // M?ng d? luu tr? các s? h?p l?
    int i = 0;
	do{
	printf("\nnhap n=");
	scanf("%d",&n);
	if (n<-10 || n>10){
		printf("\nnhap sai r e oi");
}else{
		if(n==0){
			break;
			return 0;
		}
		if(n>0){
			valid_numbers[i] = n; // Luu s? h?p l? vào m?ng
                i++;
			
			count++;
			sum+=n;
		}
}
	}while(1);
	printf("\nCac so hop le: ");
    for (j = 0; j < count; j++) {
        printf("%d ", valid_numbers[j]); // In ra các s? h?p l? t? m?ng
    }
	printf("\nso phu hop la %d",count);
	printf("\ntong cac so la %d",sum);
	return 0;
}
