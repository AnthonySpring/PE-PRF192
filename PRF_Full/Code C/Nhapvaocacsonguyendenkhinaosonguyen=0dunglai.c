#include<stdio.h>
//nhap tong cac so n sao cho n=0 thi dung lai
int main(){
	int n;
	int sum=0;
    scanf("%d", &n);
//c1
	while(n!=0){
	 sum+=n;
	 scanf("%d",&n);	
}
    printf("%d",sum);  
		return 0;
}

////c2
//    do{
//	sum +=n;
//	scanf("%d",&n);
//	}while(n!=0);
//	printf("%d",sum);
//		return 0;
//}
