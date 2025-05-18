#include<stdio.h>
#include<stdlib.h>
//ktra 1 ki tu co phai in thuong k
int is_lower(char c){
	if(c>='a'&&c<='z'){
		return 1;
	}
	return 0;
}
//ktra in hoa  
int is_upper(char c){
	if(c>='A'&&c<='Z'){
		return 1;
	}
	return 0;
}
//ktra co phai chu cai k
int is_alpha(char c){
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
		return 1;
	}
	return 0;
}
//ktra co phai ki tu so k
int is_digit(char c){
	if(c>='0'&&c<='9'){
		return 1;
	}
	return 0;
}
//tra ve dang in thuong ki tu 
char to_lower(char c){
	if(c>='A'&&c<='Z'){
		c+=32;
	}
	return c;
}
//tra ve dang in hoa ki tu
char to_upper(char c){
	if(c>='a'&&c<='z'){
		c-=32;
}
return c;
}
//tra ve chieu dai sau
int strlen(char c[]){
	int cnt=0;
	while(c[cnt]!='\0'){
		++cnt;
	}
	return cnt;
}
//viet thuong tat ca cac ki tu
//char* strlwr(char c[]){
//	for(int i=0;i<strlen(c);i++){
//		if(c[i]>='A'&&c[i]<='Z'){
//			c[i]+=32;
//		}
//		//c[i]=to_lower(c[i])
//	}
//	return c;
//}
//viet hoa tat ca cac ki tu
//char* strupr(char c[]){
//	for(int i=0;i<strlen(c);i++){
//		c[i]=to_upper(c[i]);
//}
//return c;
//}
//so sanh 2 xau a va b theo thu tu tu dien,neu a>b tra ve 1,a=b tra ve 0,a<b tra ve -1
int min(int a,int b){
	return a<b?a : b;
}
int strcmp(char c[],char d[]){
	int i;
	int n1=strlen(c);
	int n2=strlen(d);
	for( i=0;i<min(n1,n2);i++){
		if(c[i]!=d[i]){
			if(c[i]>d[i]) return 1;
			else return -1;
		}
	}
	if(n1==n2)
	return 0;
	else if(n1<n2) return -1;
	else return 1;
}
//so sanh 2 xau a va b theo thu tu tu dien k pb hoa thuong,neu a>b tra ve 1,a=b tra ve 0,a<b tra ve -1
int strcmpi(char c[],char d[]){
	int i;
	int n1=strlen(c);
	int n2=strlen(d);
	strlwr(c);
	strlwr(d);
	for( i=0;i<min(n1,n2);i++){
		if(c[i]!=d[i]){
			if(c[i]>d[i]) return 1;
			else return -1;
		}
	}
	if(n1==n2)
	return 0;
	else if(n1<n2) return -1;
	else return 1;
}
//chuyen 1 xau ki tu so thanh soo nguyen long long
//long long atoll(char c[]){
//	int i;
//	long long res=0;
//	for(i=0;i<strlen(c);i++){
//		res=res*10+c[i]-'0';//chuyen ki tu thanh so tg ung
//	}
//	return res;
//}
//viet ham dao nguoc 1 xau
char* strrev(char c[]){
	int l=0,r=strlen(c)-1;
	while(l<r){
		char tmp=c[l];
		c[l]=c[r];
		c[r]=tmp;
		++l;--r;
	}
	return c;
}
int main(){
	char c[100],d[100];
	gets(c);
//	gets(d);
//	printf("%d",strcmpi(c,d));
//    printf("%lld",atoll(c));
  printf("%s",strrev(c));
}





