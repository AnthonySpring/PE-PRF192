#include<stdio.h>
#include<math.h>
int main(){
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		printf("%d la so hoan hao",n);
	}else{
		printf("n k la so hoan hao");
	}
	return 0;
}
