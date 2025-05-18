#include<stdio.h>
void del(int a[],int *n,int k){
	int i,j;
	//Duyet qua tung phan trong mang
	for(i=0;i<*n;i++){
		//ktra dk 
		if (a[i]<k){
		// dich chuyen tat ca ptu phia sau len 1 vtri
			for(j=i;j<*n-1;j++){
				a[j]=a[j+1];
			}
			(*n)--;
			// Gi?m bi?n d?m l?i d? ki?m tra ph?n t? t?i v? trí m?i sau khi d?ch chuy?n
			i--;
		}
	}
}
void nhapMang(int a[],int *n){
	int i;
	printf("nhap so lg ptu: ");
	scanf("%d",&*n);
	printf("nhap mang\n");
	for(i=0;i<*n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[],int n){
	int i;
	printf("xuat mang=  ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int a[100],n,k;
	nhapMang(a,&n);	
	printf("Nhap gia tri k: ");
    scanf("%d", &k);
	del(a,&n,k);
	xuatMang(a,n);
	return 0;
}

