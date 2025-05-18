#include<stdio.h>
#include<math.h>
//int nguyento(int n){
//	int i;
//	for(i=2;i<=sqrt(n);i++){
//		if(n%i==0)
//		return 0;
//	}
//	return n>1;
//}
int main(){
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int res=a[0],raze=a[0],idx=0,adx=0;
	for(i=0;i<n;i++){
		if(a[i]<res){//<= in index chi so sau
			res=a[i];
			idx=i;
		}
	}
	for(i=0;i<n;i++){
		if(a[i]>raze){
			raze=a[i];
			adx=i;
		}
	}
	printf("%d\n",idx);
	printf("%d",adx);
}
