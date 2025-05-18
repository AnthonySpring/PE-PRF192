#include<stdio.h>
#include<string.h>
#include<ctype.h>
int demTu(char s[]){
	int tu;
	int i,count=0;
	for(i=0;i<strlen(s)-1;i++){
		if(s[i]==' '&&s[i+1]!=' '){
			count++;
		}
	}
	if(s[0]!=' ') count++;
	return count;
}
////C2 dem tu sd strtok
//int demTu2(char *s){
//	char s1[100];
//	strcpy(s1,s);
//	int count=0;
//	char *word=strtok(s1," ");
//	while(word!= NULL){
//		count++;
//		word = strtok(NULL, " ");
//	}
//	return count++;
//}


//Bai 5 viet hoa tu dau tien cua ten 
void chuanHoa(char *s){
	int i;
	strlwr(s);
	for(i=0;i<strlen(s)-1;i++){
		if(s[i]==' '&&s[i+1]!=' '){
			s[i+1]=toupper(s[i+1]);
		}
	}
	if(s[0]!= ' ') s[0]=toupper(s[0]);
//xoa dau cach du thua
i=0;
while(s[i]==' ') i++;
strncpy(s,s+1,strlen(s)-1);
s[strlen(s)-i]='\0';//danh dau ki tu ket thuc cuoi
//xoa dau cach o cuoi
printf("\nDo dai: %d",strlen(s));
i=strlen(s)-1;
while(s[i]==' ') i--;
s[i+1]='\0';
printf("\nDo dai:%d",strlen(s));
//xoa dau cach o giua 
char s1[100],kq[100];
strcpy(s1,s);
char *token = strtok(s1," ");
while(token!= NULL){
	strcat(kq,token);
	strcat(kq," ");
	token=strtok(NULL," ");
}
strcpy(s,kq);
puts(s);
}
int main(){
	char s[100];
	gets(s);
	printf("\n so tu la %d",demTu(s));
	chuanHoa(s);
	puts(s);
	return 0;
}

