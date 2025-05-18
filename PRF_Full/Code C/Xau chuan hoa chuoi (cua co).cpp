//Vi?t ctr chuy?n 1 chu?i thành d?ng proper,nghia là kí t?  sau d?u cách là kí t? in hoa và k có d?u cách th?a.VD 'Nguyen Van Tung' là 1 chu?i d?ng proper
#include<stdio.h>
#include<string.h>

void proper_chuoi(char s[]){
	int i;
	int n=strlen(s);
	s[0]=toupper(s[0]);
	for(i=1;i<n;i++){
	if((isalpha(s[i]))&&(s[i-1]==' ')){
		s[i]=toupper(s[i]);
	}
}
}
int main(){
	char s[100];
	printf("nhap chuoi:");
	fgets(s,sizeof(s),stdin);
	proper_chuoi(s);
	puts(s);
	return 0;
}
