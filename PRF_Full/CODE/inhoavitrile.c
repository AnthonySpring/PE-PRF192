#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	char str[100];
	gets(str); 
	//scanf("%[^\n]",&str);
	int i,len=strlen(str); 
	for(i=0;i<len;i++)
		if(i%2!=0) str[i]-=32;
	printf("%s",str);


return 0;
}

