#include<stdio.h>
#include<math.h>
void Cal(int x, int n, int *s, int *s1, float *s2){
	int i,Y=1;
   *s=1,*s1=1,*s2=1.0;
	for (i=1;i<=n;i++){
		*s+=pow(x,i);
	    *s1+=pow(-x,i);
	    Y *= i;
	    *s2+=(pow(x,i))/Y;
	}
}
int main(){
	int x,n,S,S1;
	float S2;
	printf("nhap x=");
	scanf("%d",&x);
	printf("\nnhap so mu n=");
	scanf("%d",&n);
	if (x,n < 1) {
        printf("Gia tri cua x,n phai lon hon hoac bang 1.\n");
        return 0; // Thoát chuong trình v?i mã l?i
    }
	Cal(x,n,&S,&S1,&S2);
	
	printf("\nS=%d",S);
	printf("\nS1=%d",S1);
	printf("\nS2=%f",S2);
	return 0;
}
