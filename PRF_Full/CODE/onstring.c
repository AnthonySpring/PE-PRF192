#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void nhapMangXau(char a[50][30],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nNhap vao xau thu %d:",i+1);
		gets(a[i]);
	}
} 
char * Upper(char *s){
	char *a=malloc(strlen(s));
	int i,L=strlen(s);
	for (i=0;i<L;i++){
		if (s[i]>='a' && s[i]<='z'){
			a[i]=s[i]-32;
		}else
			a[i]=s[i];
	}
	a[i]='\0';
	return a;
}
void hienMangXau(int n,char a[50][30]){
	printf("\n");
	int i;
	for(i=0;i<n;i++){
		printf("\n%s",(a[i]));
	}
	printf("\n");
}
void search(char a[50][30],int n,char b[30]){
	//tim trong a co phan tu chua b hay khong
//nhap vao n xau ki tu,sau do nhap 1 xau x,in ra cac xau da nhap co chua xau x
//vidu 1.dh fpt 2.dh qghn 3. vien cntt     xau x=dh  =>in ra 1 va 2
	int i;
	for(i=0;i<n;i++){
		if(strstr( Upper(a[i]),Upper(b)) >0)  printf("\n%s ",a[i]);
//	if(strstr( (a[i]),(b))>0)  printf("%s ",a[i]);
	}
}
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
			/*if (a[j]<a[vtmin]) vtmin=j;*/
			if (strcmp (a[j],a[vtmin])<0) vtmin=j;
		}
		if (vtmin>i){
			swapchar(a[i],a[vtmin]);
		}
	}
}
int main(){
	int i,j;
	char s[50][30];
	char s1[30];
	int n;
	printf("\nSo luong xau can nhap:");
	scanf("%d",&n);
	getchar();
	nhapMangXau(s,n);
	hienMangXau(n,s);
/*	printf("\nXau s1:");
	gets(s1);
	printf("\nXau co chua xau s1:");
	search(s,n,s1);*/
	printf("\nMang xau sau khi sap xep:");
	SelecttionSortchar(s,n);
	hienMangXau(n,s);
return 0;
}
