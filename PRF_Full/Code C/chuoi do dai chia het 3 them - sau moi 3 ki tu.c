#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
	char s[100];
	int n,i;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++){
		if(i!=0&&i%3==0&&i!=n-1){
			printf("-");
		}
		printf("%c",s[i]);
	}
	return 0;
}

