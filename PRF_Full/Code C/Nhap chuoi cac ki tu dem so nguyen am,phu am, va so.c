#include<stdio.h>
#include<ctype.h>
int main(){
	char ch;
	int nVowels=0,nConsonants=0,nOthers=0;
	printf("nhap chuoi cac ki tu:");
	do{
		ch=getchar();//nhap ki tu hoac dung man hinh
		ch=toupper(ch);
		if (ch>='A' && ch<='Z'){      	
		
		switch (ch){
			case'A':
			case'E':
			case'O':
			case'I':
			case'U':
			nVowels++;
			break;
		default:
		    nConsonants++;		
		}	
		}else {
			nOthers++;
		}
		
	}while(ch!='\n');
	printf("Number of vowels: %d\n", nVowels);
    printf("Number of consonants: %d\n", nConsonants);
    printf("Number of other characters: %d\n", nOthers-1);
    return 0;
}
