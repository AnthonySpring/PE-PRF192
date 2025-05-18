#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	char c[100];
	int i;
	gets(c);
//	for(i=0;i<strlen(c);i++){  C1
//		c[i]=tolower(c[i]);
//	}
	strlwr(c); //C2
	printf("%s",c);
}

