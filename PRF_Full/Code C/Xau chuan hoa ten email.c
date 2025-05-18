#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
int main(){
	int t;
	int i;
	scanf("%d",&t);
	getchar();
	while(t--){
    char c[1000];
    char a[10][100];
    strlwr(c);
	gets(c);
    int n=0;//dem so lg tu trong cau
    char *token=strtok(c," ");
    while(token!=NULL){
    	strcpy(a[n++],token);
    	token=strtok(NULL," ");
	}
	printf("%s",a[n-1]);
    for(i=0;i<n-1;i++){
    	printf("%c",a[i][0]);
	}
	printf("@gmail.com");
   printf("\n");	
}
return 0;
}


