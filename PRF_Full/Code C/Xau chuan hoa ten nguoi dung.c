#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
void chuanHoa(char c[]){
	int i;
	c[0]=toupper(c[0]);
	for(i=1;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	int i;
	getchar();
	while(t--){
    char c[1000];
    char a[20][50];
	gets(c);
    int n=0;//dem so lg tu trong cau
    char *token=strtok(c," ");
    while(token!=NULL){
    	strcpy(a[n],token);
    	++n;
    	token=strtok(NULL," ");
	}
    for(i=0;i<n;i++){
    	chuanHoa(a[i]);
    	printf("%s ",a[i]);
	}
   printf("\n");
   
    
	
}
return 0;
}
