#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,count=0,count1=0;
	char a[17]="0123456789ABCDEF",b[100],c[100];
	scanf("%d",&n);
	int n1=n,n2=n;
	while (n2>0){
		b[count]=a[n2%16];
		n2=n2/16;
		count++;
	}
	for (count=count-1;count>=0;count--){
		printf("%c",b[count]);
	}
	printf("\n");
	while (n1>0){
		c[count1]=a[n1%8];
		n1=n1/8;
		count1++;
	}
	for (count1=count1-1;count1>=0;count1--){
		printf("%c",c[count1]);
	}
	return 0;
}
