#include<stdio.h>
#include<math.h>
int check(int n,int a[n]){
	int i;
	for(i=0;i<n-1;i++){
		if(a[i]>=a[i+1]){
			printf("phan tu dau tien lam mat tinh tang dan cua day la %d\n",a[i+1]);
			return 0;
		}
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
	if (check(n,a)){
		printf("mang tang dan ");
		}else{
			printf("mang k tang dan\n ");
		}
//liet ke cac ptu k nho hon cac ptu dung trc no
	for(i=0;i<n;i++){
		int ok=1,j;
	    for(j=0;j<i;j++){//a[j] chay truoc 
	    	if(a[j]>a[i]){
	    		ok=0;
	    		break;
			}
		}
		if(ok){
			printf("%d",a[i]);
		}
	}	
	return 0;
	}

