#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);
//	for(i=1;i<=n;i++){ tam giac vuong B
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
    for(i=1;i<=n;i++){  //tam giac vuong A
    	for(j=1;j<=n+1-i;j++){
    			printf("*");
	    }
	        printf("\n");

}
}

