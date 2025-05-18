#include<stdio.h>
int cnt[1000001]={0};
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		cnt[a[i]]++;
}
    int dem = 0,res;
    for(i=0;i<n;i++){
    	if(cnt[a[i]]>dem){
    		dem=cnt[a[i]];
    		res=a[i];//in ra theo thu tu nhap
//		}else if(cnt[a[i]]==dem){  //in ra so co tan so xh nho hon
//			if(res>a[i]) res = a[i];//< in ra so lon hon
		}
		}
		printf("%d %d",res,dem);
	}

