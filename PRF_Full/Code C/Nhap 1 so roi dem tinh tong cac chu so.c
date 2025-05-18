#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int dem=0,sum=0;
	while(n!=0){
     	sum+=n%10;//cong chu so hang don vi
		dem++;
		n/=10;
}
    printf("%d\n",dem);
    printf("%d",sum);
	return 0;
	}
//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	int dem=0,sum=0;
//	while(n!=0){
//    printf("%d",n%10);
//    n/=10;
//}
//	return 0;
//}
