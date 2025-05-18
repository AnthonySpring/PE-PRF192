#include<stdio.h>//bien doi cac ki tu tu thuong thanh hoa, hoa thanh thuong
#include<string.h>
void convertCase(char s[]){
	int i=0;
	while(s[i]){
		if(islower(s[i])){
			s[i]=toupper(s[i]);
		}else if(isupper(s[i])){
			s[i]=tolower(s[i]);
		}
		i++;
		}
}
int main(){
	char s[100];
	printf("nhap chuoi: ");
	fgets(s, sizeof(s), stdin);
	convertCase(s);
//	puts(s);
    printf("chuoi sau la %s",s);
	return 0;
	
}
