#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	int i;
	char c[5005];
	gets(c);
	int cnt[256]={0};
	for(i=0;i<strlen(c);i++){
		cnt[c[i]]++;
	
	}
	int res = 0;
	char kt;
	for(i=0;i<256;i++){
		if(cnt[i]){
			if(cnt[i]>=res){
				res=cnt[i];
				kt=(char)(i);
			}
		}
	}
	printf("%c",kt);
}
