#include<stdio.h>
#include<math.h>
int main(){
int n;
int i;
	float x,sumS1=1,sumS2=1,sumS3=1,T1=1,T2=1,T3=1;
	printf("nhap vao x:");
	scanf("%f",&x);
	printf("\nnhap vao n:");
	scanf("%d",&n);
	
	for ( i=1;i<=n;i++){
//C1
	T1 = T1 * x;         
	   T2 = T2 * (-x); 
	  T3 = T3 * x/i;
	sumS1=sumS1+T1;
	 sumS2=sumS2+T2;
	 sumS3=sumS3+T3;
	// C2: sumS1 = sumS1 + (float)(pow(x,i));	
  }
  printf("\nsumS1 = %f",sumS1);
  printf("\nsumS2 = %f",sumS2);
  printf("\nsumS3 = %f",sumS3);
  return 0;
}
