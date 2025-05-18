#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int min(int a,int b){
	return a<b?a:b;
}
//char *strstr(char a[],char b[])
int main(){
	int i,t;
	scanf("%d",&t);
    getchar();
    while(t--){
    	char c[1000];
    	gets(c);
    	int cnt[256]={0};
    	for(i=0;i<strlen(c);i++){
    	    cnt[c[i]]++;
	}
	int res=0;
	for(i=0;i<256;i++){
	    if(cnt[i]%2==1) ++res;	
	}
	if(res<=1) printf("YES\n");
	else printf("NO\n");
}
}
