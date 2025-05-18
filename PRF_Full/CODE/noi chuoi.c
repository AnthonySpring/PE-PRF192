#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void nhapMangXau(char a[50][30],int n){
	int i;
	for(i=0;i<n;i++){
		gets(a[i]);
	}
} 
void hienMangXau(int n,char a[50][30]){
	printf("\n");
	int i;
	for(i=0;i<n;i++){
		printf("%s",(a[i]));
	}
	printf("\n");
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
void noichuoi(char *a,char *b)
{
strcat(a,b);
puts(a);

}

int main(){
	int i,j,a,b;
	char s[50][30];
	char s1[30];
	int n,m;
	scanf("%d",&n);
	getchar();
	nhapMangXau(s,n);
	scanf("%d",&m);
	getchar();
	nhapMangXau(s1,n);
	noichuoi(a,b);
	SelecttionSortchar(s,n);
	hienMangXau(s,n);

return 0;
}

