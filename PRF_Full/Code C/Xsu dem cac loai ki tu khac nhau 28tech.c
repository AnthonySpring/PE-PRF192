#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	char c[100];
	int i;
	gets(c);
	int cnt1=0,cnt2=0;
	for(i=0;i<strlen(c);i++){
		if(isalpha(c[i]))  ++cnt1;
		else if(isdigit(c[i])) ++cnt2;
	}
    printf("%d %d %d",cnt1,cnt2,strlen(c)-cnt1-cnt2);

}

