//Vi?t ctr chuy?n 1 chu?i th�nh d?ng proper,nghia l� k� t?  sau d?u c�ch l� k� t? in hoa v� k c� d?u c�ch th?a.VD 'Nguyen Van Tung' l� 1 chu?i d?ng proper
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
