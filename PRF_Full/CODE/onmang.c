#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int charinstr(char *s,char c){
	//neu ki tu xuat hien return vi tri dau tien ki tu xuat hien
	int i;
	for(i=0;i<strlen(s);i++){
		if(s[i]==c) return i;
	}
	return -1;
}
int countChar(char *s,char ch){
	//dem trong xau co bnh ki tu ch
	//vd:s=dai hoc fpt ha noi ch='a' =>2
	int i,count=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]==ch) count++;
	}
	return count;
}
void countAllChar(char *s){
	//dem ki tu xuat hien trong xau
	int a[strlen(s)],i,j,n=strlen(s);
	for(i=0;i<n;i++) a[i]=0;
	for(i=0;i<n;i++){
		if(a[i]==0){
			int count=1;
			for(j=i+1;j<n;j++){
				if(s[i]==s[j]){
					count++;
					a[j]=1;
				}
			}
			printf("%c xuat hien %d lan\n",s[i],count);
		}
	}
}
char * leftTrim(char *s){
	//loai bo dau cach o dau xau
	int i,j;
	while(s[0]==' '){
		for(i=0;i<strlen(s)-1;i++){
			s[i]=s[i+1];
		}
		s[strlen(s)-1]='\0';
	}
	return s;
}
char * rightTrim(char *s){
	while(s[strlen(s)-1]==' ') s[strlen(s)-1]='\0';
	return s;
}
char * replace(char *s0,char *s1,char *s2){
	//thay the xau s1=s2 trong s0
	//vdu s0=hoc hoc nua hoc mai s1=hoc s2=learn =>learn learn nua learn mai
 	int pos=strstr(s0,s1)-s0;
 	if(pos>=0){
 		char *s4=malloc(50);
 		int i,j=0;
 		for(i=0;i<pos;i++){
 			s4[j++]=s0[i];
		}
		for (i=0;i<strlen(s2);i++){
			s4[j++]=s2[i];
		}
		for (i=pos+strlen(s1);i<strlen(s0);i++){
			s4[j++]=s0[i];
		}
		s4[j]='\0';
		return s4;
	}
	return s0;
}
char * Trim(char *s){
	s=leftTrim(s);
	s=rightTrim(s);
	while (strstr(s,"  ")-s>=0) s=replace(s,"  "," ");
	return s;
}
int countWord(char *s){
	//den xau s co bao nhieu tu
	int i, count=s[0]==" "?0:1;
	for(i=0;i<strlen(s);i++){
		if(s[i]=' ' && s[i+1]!=' ')  count++;
	}
	return count; 
}
int isSym(char *s){
	//ktra xau co doi xung khong
	//vdu s=ABCCBA return 1; ABCABC return 0;
	int i,j;
	for(i=0;i<strlen(s)/2;i++){
		if(s[i]!=s[strlen(s)]) return 0;
		j++;
	}
	return 1;
}
int main(){
	int a;
	/*char s[50];*/
	char *s=malloc(50); //trim
	char *s1=malloc(50);
	char *s2=malloc(50);
	printf("\nNhap vao xau ki tu:");
	gets(s);
	/*printf("\nNhap ki tu de kiem tra:");
	char ch;
	scanf("%c",&ch);*/
	/*int pos=charinstr(s,ch);
	if(pos==-1) printf("\nKhong co ki tu %c trong xau %s",ch,s);
	else printf("\nVi tri dau tien %c co trong '%s' la %d",ch,s,pos);*/
	/*int count=countChar(s,ch);
	if(count>0) printf("Co %d ki tu '%c' trong xau %s",count,ch,s);
	else printf("Khong co ki tu '%c' trong xau %s",ch,s);*/
	/*countAllChar(s);*/
	/*s=leftTrim(s);
	printf("\nXau sau khi bo dau cach o dau: %s",s);*/
	/*printf("\nXau tim kiem:");
	gets(s1);
	printf("\nXau thay the:");
	gets(s2);
	while (strstr(s,s1)-s>=0) 	s=replace(s,s1,s2);
	printf("\nXau sau khi thay the: %s",s);*/
	/*s=Trim(s);
	printf("\nXau sau khi trim(): %s",s);*/
	/*printf("\nXau co %d tu",countWord(s));*/
	if(isSym(s)) printf("\nDoi xung");
	else printf("\nKhong doi xung");
return 0;
}

