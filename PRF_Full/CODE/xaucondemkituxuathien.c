#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int charinstr(char *s,char c){
	//kiem tra ki tu c co trong xau s hay khong
	//Neu co tra ve 1 vi tri dau tien c xuat hien trong s
	//neu khong co tra ve gia tri -1
	//vi du: s="Dai hoc fpt Ha Noi" , c='a'
	//thi ham se tra ve gia tri la: 1
	//neu c='z' ham se tra ve gia tri -1;
	int i;
	for (i=0;i<strlen(s);i++){
		if (s[i]==c) return i;
	}
	return -1;
}

int countChar(char *s,char ch ){
	//dem xem trong xau s co bao nhieu ki tu ch
	//vi du: s= 'Dai hoc FPT Ha Noi' ch='a' => 2 (co 2 ki tu a)
	//vi du: s= 'Dai hoc FPT Ha Noi' ch='b' => 0 (khong co ki tu b)
	int i,count=0;
	for (i=0;i<strlen(s);i++){
		if ( s[i] ==ch) count++;
	}
	return count;
}
void countAllChar(char *s){
	//thong ke tan suat xuat hien cua cac ki tu trong xau s
	//vi du: s = 'Dai hoc FPT Ha Noi'
	//D=1, a= 2, i = 2,...
	int a[strlen(s)];
	int i,j,n=strlen(s);
	for (i=0;i<n;i++) a[i]=0;
	for (i=0;i<n;i++){
		if (a[i]==0){
			int count=1;
			for (j=i+1;j<n;j++){
				if (s[i]==s[j]){
					count++;
					a[j]=1;
				}
			}
			printf("\n'%c' xuat hien %d lan",s[i],count);
		}
	}
}
void countAllchar2(char *s){
	int a[256]={0};
	int i,n=strlen(s);
	for (i=0;i<n;i++) a[s[i]]++;
	for (i=0;i<256;i++){
		if (a[i]>0){
			printf("\n%c xuat hien %d lan",i,a[i]);
		}
	}
}
char * leftTrim(char *s){
	//loai bo dau cach o dau xau
//	vi du: s = '      Dai hoc FPT' => s='Dai hoc FPT'
	int i,j;
	while (s[0]==' '){
		for (i=0;i<strlen(s)-1;i++){
			s[i]=s[i+1];
		}
		s[strlen(s)-1]='\0';
	}
	return s;
}
char * rightTrim(char *s){
	//loai bo dau cach o cuoi xau
//	vi du: s = 'Dai hoc FPT         ' => s='Dai hoc FPT'
	while (s[strlen(s)-1]==' ') s[strlen(s)-1]='\0';
	return s;
}
char * repalce(char *s0, char *s1,char *s2){
	//thay the xau s1 bang xau s2 trong s0
//	vi du: s0='Hoc hoc nua hoc mai' s1='hoc', s2='Lean'
//	S0=Hoc Learn nua Learn mai'
	//su dung ham strstr(s0,s1) de ti vi tri dau tien cua s1 xuat hien trong s0
	int pos = strstr(s0,s1)-s0; 
//	printf("pos %d",pos);
	if (pos>=0){
		char *s4 =malloc(50);
		int i,j=0;
		for (i=0;i<pos;i++){
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
	
	// pos la so nguyen, chinh la vi tri dau tien cua s1 trong s0
	
}
char * trim(char *s){
	s=leftTrim(s);
	s=rightTrim(s);
	while (strstr(s,"  ")-s>=0) s=repalce(s,"  "," ");
	return s;
}
int countWord(char *s){
//	dem xau s co bao nhieu tu
//vi du: s='Dai hoc FPT Ha Noi' => 5
	int i, count=s[0]==' '?0:1;
	for (i=0;i<strlen(s);i++){
		if (s[i]==' '&& s[i+1]!=' ' ) count++;
	}
	return count;
}
int isSym(char *s){
	//kiem tra xem xau co la doi xung hay khong?
	//vi du: s='ABCCBA' =>1 s='ABCABC' 0
	
}
int main(){
	int i,j;
	int a,b,c;
	char *s=malloc(50);
	char *s1=malloc(50);
	char *s2=malloc(50);
	printf("\nNhap vao xau ki tu:");
	gets(s);
//	s=trim(s);
//	printf("\nXau co %d tu ",countWord(s));
//	printf("\nXau tim kiem:");
//	gets(s1);
//	printf("\nXau thay the:");
//	gets(s2);
//	while (strstr(s,s1)-s>=0)	s=repalce(s,s1,s2);
//	printf("\nXau sau khi thay the: %s",s);
//	printf("\nXau sau khi loai bo dau cach o dau: %s",s);
	
//	countAllChar(s);
//	printf("\nCach 2:\n");
//	countAllchar2(s);
//	printf("\nNhap ki tu de kiem tra:");
	char ch;
	printf("Nhap vao mot ki tu de tim:");
	scanf("%c",&ch)	;
	int count=countChar(s,ch);
	printf("\nOUTPUT:\n");
	if (count>0) printf("\nCo %d ki tu '%c' trong xau \"%s\".",count,ch,s);
	else printf("\nKhong co ki tu '%c' nao",ch);
//	int pos=charinstr(s,ch);
//	if (pos==-1) printf("\nKhong co ki tu %c trong xau '%s'",ch,s);
//	else printf("\nVi tri dau tien %c co trong \"%s\" la %d",ch,s,pos);
	


return 0;
}

