#include<stdio.h>
//int mark[1000001]={0};
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//	for(i=0;i<n;i++){
//		if(mark[a[i]]==0){
//			printf("%d",a[i]);
//			mark[a[i]]=1;
//		}
//	}
     for(i=0;i<n;i++){
     	int ok=1;
     	for(j=0;j<i;j++){
     		if(a[i]==a[j]){
     			ok=0; break;
			 }
		 }
		 if(ok) printf("%d",a[i]);
}
}
