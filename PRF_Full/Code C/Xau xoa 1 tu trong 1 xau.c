#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	//int i;
	char c[1000];
	gets(c);
	char w[10];
	scanf("%s",w);
	char *token=strtok(c, " ");
	//char a[20][50]; int n=0;  // xoa khoang cach sau khi in
	while(token!=NULL){
		if(strcmp(token,w)!=0){
//			strcpy(a[n],token);
//		    ++n;
			printf("%s ",token);
		}
		token=strtok(NULL," ");
	}
//	for(i=0;i<n;i++){
//		printf("%s",a[i]);
//		if(i!=n-1) printf(" ");
//	}
}
