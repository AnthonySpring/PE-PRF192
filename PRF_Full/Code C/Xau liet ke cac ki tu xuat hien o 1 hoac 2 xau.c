#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	int i;
	char c1[1000],c2[1000];
	scanf("%s",c1);
	scanf("%s",c2);
	int cnt[256]={0};
	for(i=0;i<strlen(c1);i++){
		cnt[c1[i]]=1;
	}
	for(i=0;i<strlen(c2);i++){
			cnt[c2[i]]=1;
		}
	for(i=0;i<256;i++){
		if(cnt[i]!=0){
			printf("%c",i);
		}
	}
}
