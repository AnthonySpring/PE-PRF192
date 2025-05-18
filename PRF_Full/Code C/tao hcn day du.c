#include<stdio.h>//i=1   * * * * *(n=5)
//      				 *.....
//co bn dong 
// moi dong co bn cot va ki tu
//ki tu, so ,chu no in ra cai gi
int main(){
	int i,n,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){//lap n dong
	//xay dung ki tu cho dong thu i       (i dong,j cot)
		for(j=1;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
}
