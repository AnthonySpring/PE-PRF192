//tinh giai thua
#include<stdio.h>
int nhapSoNguyen(int n);
int tinhGiaiThua(int n);
void inGiaiThua(int n);
int main(){
	int n;
	n=nhapSoNguyen(n);
	int gt=tinhGiaiThua(n);
	inGiaiThua(gt);
}
int nhapSoNguyen(int n)
{
	scanf("%d",&n);
	return n;
}
int tinhGiaiThua(int n){
	int i, gt=1;
	for(i=2;i<=n;i++){
		gt=gt*i;
	}
	return gt;
}
void inGiaiThua(int n){
	printf("%d",n);
}
