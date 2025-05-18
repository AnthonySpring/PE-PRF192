#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
char *Upper(char s[]){
	int i,l=strlen(s);
	char *tmp;
	tmp=malloc(50);
	strcpy(tmp,s);
	for(i=0;i<l;i++){
		if(tmp[i]>='a' && tmp[i]<='z')
		tmp[i]-=32;
	} 
	return tmp;
}
char *Lower(char s[]){
	int i,l=strlen(s);
	char *tmp;
	tmp=malloc(50);
	strcpy(tmp,s);
	for(i=0;i<l;i++){
		if(tmp[i]>='A' && tmp[i]<='Z')
		tmp[i]+=32;
	} 
	return tmp;
	
}
char *left(char *s,int n){
	char *tmp;
	tmp=malloc(50);
	int i,L=strlen(s);
	if (n<0) return NULL;
	if(n>=L) strcpy(tmp,s);
	else{
		for(i=0;i<n;i++)
			tmp[i]=s[i];
		/*tmp[i]='\0';*/
	}
	return tmp;
}
char *right(char *s,int n){
	char *tmp;
	tmp=malloc(50);
	int i,j, L = strlen(s);
    if (n < 0) return NULL;
    if (n >= L) strcpy(tmp, "");
    else {
        for (i = 0, j = n; j < L; i++, j++) {
            tmp[i] = s[j];
        }
        tmp[i] = '\0';
    }
    return tmp;
	
}
char *mid(char *s,int n){
	char *tmp;
    tmp = malloc(50);
    int i, j, L = strlen(s);
    if (n < 0 || n >= L) return NULL;
    if (n <= L/2) {
        for (i = 0, j = n; j < L; i++, j++) {
            tmp[i] = s[j];
        }
    } else {
        for (i = 0, j = L - n; j < L; i++, j++) {
            tmp[i] = s[j];
        }
    }
    tmp[i] = '\0';
    return tmp;
	
}
int main(){
	char name[50];
	char add[50];
	char str[50];
	int a;
	/*printf("What is your name:");
	//scanf("%[^\n]s",&name);
	gets(name);
	printf("\nAge:");
	scanf("%d",&a);
	fflush(stdin);
	printf("\nAddress:");
	gets(add);
	printf("\nHello %s add %s",name,add);*/
	//nhap vao sau va in ra ki tu dau va cuoi
	/*printf("\nEnter a string:");
	gets(str);
	int l=strlen(str)-1;
	printf("\nKi tu dau tien la %c, ki tu cuoi cung la %c",str[0],str[l]);*/
	//nhap vao mot xau, in ra cac ki tu le
	/*int i;
	printf("\nKi tu le:");
	for(i=1;i<=l;i+=2){
		printf("\%c ",str[i]);		
	}*/
	//mot so ham xu ly xau trong c: strlen,strcpy,strcat,strstr,strcmp
	/*strstr(s1,s2) kiem tra xem s1 co trong s2 khong
	strcat(s1,s2) noi xau s2 vao s1
	strcpy(s1,s2) copy noi dung s2 cho s1
	strlen(s) tra ve do dai
	strcmp(s1,s2) so sanh 2 xau*/
	//khai bao xau dang CON TRO
	char *strptr;
	strptr=malloc(50);
	printf("\nEnter a string:");
	gets(strptr);
	printf("\nXau vua nhap la: %s",strptr);
	printf("\nXau in hoa:%s",Upper(strptr));
	printf("\nXau in thuong:%s",Lower(strptr));
	printf("\nLay 3 ki tu ben trai: %s",left(strptr,3));
	printf("\nLay 3 ki tu ben phai: %s",right(strptr,3));
	printf("\nLay 3 ki tu o giua: %s",mid(strptr,3));
return 0;
}

