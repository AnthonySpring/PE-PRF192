#include<stdio.h>
//Xu�i:
void veTamgiac1(int n){
	int i,j;
	for (i=0; i<n; i++){
			for (j=0; j<n-i-1; j++){ // so khoang trong giong tam giac vuong can
				printf("  ");
			}
			for (j=1;j<=i+1;j++){ // 2 tam giac vuong can ghep lai
			  	printf("%d ",j);	  	
			}		
			for (j=i; j>0; j--){
				printf("%d ",j);
			}
			printf("\n");
	}
}
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	veTamgiac1(n);
}


//Nguocc
//void veTamgiac(int n){
//	int i,j;
//	for (i=0; i<n; i++){
//		for (j=1;j <= i; j++){
//		  	printf("  ");	  	
//		  }
//		for (j=1; j<=n-i; j++){
//			printf("%d ",j);
//		}
//		for (j=n-i-1;j>0;j--){
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int n;
//	printf("nhap n ");
//	scanf("%d",&n);
//      veTamgiac(n);
//	}
