#include<stdio.h>
#include<math.h>
//1.	Ha?y viê?t ch??ng tri?nh cho phe?p ng???i du?ng nhâ?p va?o mô?t da?y sô? nguyên liên tiê?p (d??ng khi sô? nhâ?p va?o = 0).
//?ê?m sô? sô? nguyên nhâ?p va?o va? l?u va?o biê?n n.
//Gia? s?? da?y nhâ?p va?o ????c l?u va?o da?y sô?: a[0], a[1], … , a[n-1].	
//Sau ?o?, ha?y cho phe?p nhâ?p va?o sô? th??c x rô?i ti?nh gia? tri? biê?u th??c:
//F = a[0] - a[1]*x + a[2]*x2 -… +(-1)n a[n-1]*xn-1
//In ra kê?t qua?: sô? n, va? gia? tri? F ti?nh ????c.

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
    
