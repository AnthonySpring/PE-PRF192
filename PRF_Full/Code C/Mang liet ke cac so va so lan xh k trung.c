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
		if(a[i]%2!=0){
		cnt[a[i]]++;
	}
}
    for(i=0;i<n;i++){
    	if(cnt[a[i]]!=0){
		printf("%d\n",a[i]);//in ra cac ptu nhieu lan
	    cnt[a[i]]=0;
	}
}
}
