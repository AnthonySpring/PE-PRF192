#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int isPrime(int n){
	//return 0 neu n khong la nguyen to
	int i;
	if (n<2) return 0;
	//kiem tra xem n co chia het cho so nao tu 2 -> n/2 hay khong
	for (i=2;i<=n/2;i++)
		if (n%i==0) return 0;
	//neu het vong for ma khong tim thay so i nao ma n chia het => no la nt	
	return 1;
	//return 1 neu n la so nguyen to
}
int main(){
	int i,j;
	int h,nt=2;
	printf("\nNhap vao do cao h = ");
	scanf("%d",&h);
	printf("\nOUTPUT:\n");
	for(i=0;i<h;i++){
		//in ra h-i +1 dau cach
		for (j=0;j<h-i;j++){
			printf("    ");
		}
		//in ra tu i den 1
		for (j=i+1;j>0;j--){
			printf("%3d ",nt);
			do{
				nt++;
			}while (isPrime(nt)==0);
		}
		printf("\n");
	}

return 0;
}

