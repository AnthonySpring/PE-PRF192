#include<stdio.h>
#include<math.h>
int main(){
	int i,a,c;
	scanf("%d",&a);
	for(i=0;i<=sqrt(a);i++){
	c=pow(2,i);
		if(c==a){
			printf("%d",i);
			return 0;
	}
	}
    printf("%d is not a power of 2",a);
	return 0;
}
