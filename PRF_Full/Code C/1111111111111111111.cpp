#include<stdio.h>
#include<math.h>
int main(){
int n;
int i;
	float x,sumS1=0,T=1;
	printf("nhap vao x:");
	scanf("%f",&x);
	printf("\nnhap vao n:");
	scanf("%d",&n);
	
	for ( i=1;i<=n;i++){
//C1
	T = T * x;         
	// PT2   T = T * (-x); 
	//PT3   T = T * x/i;
	sumS1=sumS1+T; 
	// C2: sumS1 = sumS1 + (float)(pow(x,i));	
  }
  sumS1=sumS1+1;
  printf("\nsumS1 = %f",sumS1);
  return 0;
 }
