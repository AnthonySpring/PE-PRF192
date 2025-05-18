#include<stdio.h>
#include<math.h>
//int demSo(int n){
//	int count=0;
//	while(n!=0){
//		count++;
//		n/=10;
//	}
//	return count;
//}	
int calculate(int a[],int n,double x){
	int i;
	double F=0;
	for (i=0;i<n;i++){
	F+=pow(-1,i)*a[i]*pow(x,i);
}
return F;
}
int main(){
	int a[100],n,i;
	double x,sum;
	printf("nhap day so nguyen (dung khi nhap 0): ");
	do{
		scanf("%d",&a[n]);
		if(a[n]==0) {
			break;
		}
		n++;
	}while(1);
	printf("so nguyen nhap vao la:%d",n);
	printf("nhap so thuc x: ");
	scanf("%lf",&x);
	sum=calculate(a,n,x);
    printf("Gia tri F: %lf\n", sum);
	return 0;
}
    
