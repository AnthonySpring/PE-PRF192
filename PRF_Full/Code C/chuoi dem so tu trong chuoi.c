#include<stdio.h>
#include<string.h>
int demTu(char s[]){
	int i,tu=0;
	int n=strlen(s);
	for (i=0;i<n-1;i++){
		if(s[i] !=' '&&(i==0||s[i-1]==' ')){
			tu++;
		}
	}
	return tu;
}
int main(){
	char s[100];
	printf("nhap chuoi:");
	fgets(s,sizeof(s),stdin);
//	if((strlen(s)>0)&&(s[strlen(s)-1]=='\n')){
//		s[strlen(s)-1]='\0';
//	}
	printf("So tu trong chuoi là: %d\n", demTu(s));
	return 0;
}
