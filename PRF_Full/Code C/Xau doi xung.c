#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int check(char c[]){
	int l=0,r=strlen(c)-1;
	while(l<=r){
		if(c[l]!=c[r])
		return 0;
		++l;
		--r;
	}
	return 1;
}
int main(){
	int i;
	char c[1000];
	scanf("%s",c);
	for(i=0;i<strlen(c);i++){
	if(check(&c[i])==1){
    printf("dx");
    break;
    }else{
    	printf("k dx");
    	break;
	}
	}
}
