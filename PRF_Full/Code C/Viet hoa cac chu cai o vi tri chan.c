#include<string.h>
#include<stdio.h>
void chuanHoa(char *s){
	int i;
	for(i=0;i<strlen(s)-1;i++){
		if(i%2==0){
			s[i]= toupper(s[i]);
		}
	}
}
int main(){
	char s[100];
	gets(s);
	chuanHoa(s);
	puts(s);
	return 0;
}
