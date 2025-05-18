#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	char c[100];
	int i,countnb=0,countnm=0,counthoa=0,demnt=0,n=10;
	//nhap
	for(i=0;i<n;i++){
		//fflush(stdin);
		scanf("%c",&c[i]);
	}
	//dem
	for(i=0;i<n;i++){
		if(c[i]>='0' && c[i]<='9')
		countnb++;
		if(c[i]>='a' && c[i]<='z')
		countnm++;
		if(c[i]>='A' && c[i]<='Z')
		counthoa++;
		if(c[i]=='2' || c[i]=='3' || c[i]=='5' || c[i]=='7')
		demnt++;
	}
	//hien thi
	printf("Mang co %d so, %d chu thuong, %d chu hoa va %d so nguyen to",countnb,countnm,counthoa,demnt);
	
return 0;
}

