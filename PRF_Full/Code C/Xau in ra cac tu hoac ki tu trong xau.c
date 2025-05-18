#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
int main(){
	int i;
    char c[1000];
    gets(c);
    char a[20][50];
    int n=0;//dem so lg tu trong cau
    char *token=strtok(c," ");
    while(token!=NULL){
    	strcpy(a[n],token);
    	++n;
    	token=strtok(NULL," ");
	}
//	printf("%c\n",a[0][2]);
    //printf("%s\n",a[0]);
//	printf("%s\n",a[n-1]);
    for(i=0;i<n;i++){
    	printf("%s\n",a[i]);
	}
return 0;
}
