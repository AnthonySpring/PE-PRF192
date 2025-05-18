#include<string.h>
#include<stdio.h>
int main(){
	char s[]={'V','a','l','o','r','a','n','t','\0'};
	puts(s);//printf("%s\n",s);
	printf("size cua s = %d",sizeof(s));
	printf("\nLength cua s = %d",strlen(s));
	puts("nhap lai xau: ");
	gets(s);
	puts(s);

    char s1[100];
    strcpy(s1,s);//s1=s;
    puts("Xau s1: ");
    puts(s1);
    strcat(s1," 123");
    printf("\nSo sanh s va s1: %d ",strcmp(s,s1));
    strupr(s1);
    puts(s1);
	return 0;
}
