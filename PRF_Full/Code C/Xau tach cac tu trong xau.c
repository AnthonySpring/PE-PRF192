#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	char c[1000];
	gets(c);
	char*token=strtok(c," ");//tach dau cach o chuoi c
    while(token!=NULL){
	printf("%s\n",token);
	token=strtok(NULL," ");
}
return 0;
}
