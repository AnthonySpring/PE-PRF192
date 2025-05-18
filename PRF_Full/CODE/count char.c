#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int countChar(char *s,char ch){
	//dem trong xau co bnh ki tu ch
	//vd:s=dai hoc fpt ha noi ch='a' =>2
	int count = 0,i;
    int len = strlen(s);
    for ( i = 0; i < len; i++) {
        if (tolower(s[i]) == tolower(ch)) {
            count++;
        }
    }
	return count;
}
int main(){
	int a;
	char s[50];
	printf("\nNhap vao xau ki tu:");
	gets(s);
	printf("\nNhap vao mot ki tu de tim:");
	char ch;
	scanf("%c",&ch);
	printf("\nOUTPUT:");
	int count=countChar(s,ch);
	if(count>0){
		printf("\nCo %d ki tu '%c' trong xau %s",count,ch,s);
	}else{
		printf("\nKhong co ki tu '%c' trong xau %s",ch,s);
	}

return 0;
}

