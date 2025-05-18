#include<stdio.h>
void nhapMang(int a[],int *n){//n solg phantu thucte
	printf("nhap so lg=");
	scanf("%d",&*n);
	if(*n>=10){
		printf("nhap n<10");
	}else{
	printf("nhap mang: \n");
	int i;
	for(i=0;i<*n;i++){
		printf("a[%d]= ",i);
		scanf("%d",(a+i));//&a[i]
	}
}
}
void xuatMang(int a[],int n){
	printf("\nxuat mang:\n");
	int i;
	for(i=0;i<n;i++){
	if(a[i]%2==0){
		printf("%d\n",a[i]*a[i]	);//*(a+i)
}
	}
}
int main(){
	int a[100],n;
	nhapMang(a,&n);
	xuatMang(a,n);
	return 0;
}
