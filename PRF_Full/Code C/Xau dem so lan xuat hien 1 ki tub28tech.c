//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#include<string.h>//ap dung chi in thuong hoac in hoa
//int main(){
//	int i;
//	char c[100];
//	scanf("%s",c);
//	int cnt[26]={0};
//	for(i=0;i<strlen(c);i++){
//		cnt[c[i]-'a']++;//'A'
//	}
//	for(i=0;i<25;i++){
//		if(cnt[i]!=0){
//			printf("%c %d\n",(i+'a'),cnt[i]);//'A'
//		} 
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#include<string.h>//ap dung ca in thuong va in hoa
//int main(){
//	int i;
//	char c[100];
//	gets(c);
//	int cnt[256]={0};
//	for(i=0;i<strlen(c);i++){
//	cnt[(int)c[i]]++;
//}
//    for(i=0;i<256;i++){
//    	if(cnt[i]!=0){
//    		printf("%c %d\n",i,cnt[i]);
//		}
//	}
//}


#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>//ap dung ca in thuong va in hoa k theo thu tu 
int main(){
	int i;
	char c[100];
	scanf("%s",c);
	int cnt[26]={0};
	for(i=0;i<strlen(c);i++){
	cnt[c[i]-'a']++;
}
    
    for(i=0;i<strlen(c);i++){
    	if(cnt[c[i]-'a']){
    		printf("%c %d\n",c[i],cnt[c[i]-'a']);
    		cnt[c[i]-'a']=0;
		}
    }  
}


