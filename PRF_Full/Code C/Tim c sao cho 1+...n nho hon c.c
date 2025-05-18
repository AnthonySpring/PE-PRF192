#include<stdio.h>
int sum(int n){//tinh tong 1 den n
	int tong=0,i;
	for(i=1;i<=n;i++){
		tong+=i;
	}
	return tong;
}
int find(int c){
	int n;
	for(n=1;sum(n)<c;n++);
return n;	
}
int main(){
	int c,n;
	
	do{
	   printf("nhap c=");
	   scanf("%d",&c);
	   if (c<0){
	   printf("nhap sai"); continue;
	   }
	   if (c==0) break;
	   n=find(c);
	   printf("n=%d\n",n);
	   
	   
	}while(1);
	return 0;
}
