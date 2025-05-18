#include<stdio.h>
#include<math.h>
long long max(long long a,long long b){
	return a<b? b : a;
}
int main(){
	int i,j,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    int max1=-1e9-1,max2=-1e9-1,min1=1e9+1,min2=1e9+1;
    for(i=0;i<n;i++){
    	if(a[i]>max1){
    		max2=max1;
    		max1=a[i];
		}else if(a[i]>max2){
			max2=a[i];
		}
		if(a[i]<min1){
			min2=min1;
			min1=a[i];
		}else if(a[i]<min2){
			min2=a[i];
		}
	}
	long long res = max(1ll*max1*max2,1ll*min1*min2);
	printf("%lld",res);
	return 0;
	}

