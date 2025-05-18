#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
void sx(char a[][50],int n){
	int i,j;
	for(i=0;i<n;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(strcmp(a[j],a[min])<0) min=j;
		}
		char tmp[100];
		strcpy(tmp,a[min]);
		strcpy(a[min],a[i]);
		strcpy(a[i],tmp);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	int i;
	getchar();
	while(t--){
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
    sx(a,n);
    for(i=0;i<n;i++){
    	printf("%s",a[i]);
	}
	printf("\n");
}
return 0;
}
