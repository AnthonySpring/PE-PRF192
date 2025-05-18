#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//char *strstr(char a[],char b[])
int main(){
	char a[1000],b[1000];
	scanf("%s%s",a,b);
	if(strstr(b,a)!=NULL){
		printf("YES");
}else{
    printf("NO");
}
}
		

