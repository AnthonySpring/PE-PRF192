#include<stdio.h>
//xu�i

void veTamgiacan(int n){
	int i,j;
	for (i=0; i<n; i++){
		for (j=0; j<n-i-1; j++){ // so khoang trong giong tam giac vuong can
			printf(" ");
		}
		for (j=0;j<i*2+1;j++){ // 2 tam giac vuong can ghep lai
		  	printf("*");	  	
		}
		printf("\n");
	}
}
int main(){
	int n;
	printf("nhap n ");
	scanf("%d",&n);
    veTamgiacan(n);
	}

//nguoc
//void veTamgiacan(int n){
//	int i,j;
//	for (i=0; i<n; i++){
//		for (j=0; j<i; j++){ 
//			printf(" ");
//		}
//		for (j=0;j<n*2-1-i*2;j++){ //nguoc lai so * giam dan
//		  	printf("*");	  	
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int n;
//	printf("nhap n ");
//	scanf("%d",&n);
//    veTamgiacan(n);
//	}
