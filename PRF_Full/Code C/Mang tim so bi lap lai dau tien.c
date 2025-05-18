#include<stdio.h>
#include<string.h>
int cnt[1000001]={0};
int main(){
	int i,t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)   scanf("%d",&a[i]);
		int ok=0;
		for(i=0;i<n;i++){
			if(cnt[a[i]]==1){
				printf("%d\n",a[i]);
				ok=1;
				break;
			}
			cnt[a[i]]=1;
		}
		if(!ok) printf("-1\n");
		memset(cnt,0,sizeof(cnt));
	}
}
