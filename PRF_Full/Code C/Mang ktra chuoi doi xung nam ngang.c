#include<string.h>
#include<stdio.h>
int ktDoiXung(char *s){
	int i;
	for(i=0;i<=strlen(s)/2;i++){
		if(s[i]!=s[strlen(s)-1-i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	char s[100];
    scanf("%s",s);//gets(s);
	if(ktDoiXung(s)==1)puts("s doi xung");
	else puts("s khong doi xung");
	puts(s);
	return 0;
}
