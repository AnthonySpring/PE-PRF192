#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int swapchar(char a[],char b[]){
	char tmp[30];
		strcpy(tmp,a);
		strcpy(a,b);
		strcpy(b,tmp);
}
void SelecttionSortchar(char a[50][30],int n){
	int i,j;
	int vtmin;
	for (i=0;i<n-1;i++){
		vtmin=i;
		for (j=i+1;j<n;j++){
			//if (a[j]<a[vtmin]) vtmin=j;
			if (strcmp( a[j],a[vtmin])<0) vtmin=j;
		}
		if (vtmin>i){
			swapchar(a[i],a[vtmin]);
		}
	}
}
void nhapMangXau(char a[50][30],int n){
	int i;
	for (i=0;i<n;i++){
		printf("\nNhap vao xau thu %d: ",i+1);
		gets(a[i]);
	}
}
void hienMangXau(char a[50][30],int n){
	printf("\n");
	int i;
	for (i=0;i<n;i++){
		printf("\n%s",a[i]);
	}
	printf("\n");

}
//Nhap vao n xau ki tu. sau do nhap mot xau X,
//in ra cac xau da nhap co chua xau x
//vi du: 1. Dai hoc FPT, 2. Dai hoc QHGN, 3. Vien CNTT
//xau x = 'Dai hoc'
//=> in ra 1 va 2
char * Upper(char *s){
	char *a=malloc(strlen(s));
	int i,L=strlen(s);
	for (i=0;i<L;i++){
		if (s[i]>='a' && s[i]<='z'){
			a[i]=s[i]-32;
		}else
			a[i]=s[i];
	}
	return a;
}
void Search(char a[50][30],int n,char b[30]){
//tim trong a co phan tu nao chua b hay khong. co thi hien thi phan tu do ra
	int i;
	for (i=0;i<n;i++){
		if (strstr( Upper(a[i]),Upper(b) )>0){
			printf("\n%s",a[i]);
		}
	}
}
//Nhap vao n xau ki tu.
//sap xep xau theo thu tu tang/giam dan
int main(){
	int i,j;
	char s[50][30];
	int n ;
	printf("\nCan nhap bao nhieu xau:");
	scanf("%d",&n);
	getchar();
	nhapMangXau(s,n);
	hienMangXau(s,n);
	SelecttionSortchar(s,n);
	printf("\nMang xau sau khi sap xep:");
	hienMangXau(s,n);
//	char b[30];
//	printf("\nNhap xau can tim kiem:");
//	gets(b);
//	Search(s,n,b);
	

return 0;
}

