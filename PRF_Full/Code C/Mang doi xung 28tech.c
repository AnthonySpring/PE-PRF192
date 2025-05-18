#include<stdio.h>
#include<math.h>
int dx(int a[],int n){
	int l=0,r=n-1;
	while(l<r){
		if(a[l]!=a[r]){
			return 0;
		}
		++l;  --r;
	}
	return 1;
}
int main(){
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if (dx(a,n)){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
	}

