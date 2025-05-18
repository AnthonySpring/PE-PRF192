#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	char s[100];
	char d[100];
//	fgets(s,20,stdin);
	gets(s);
	gets(d);
	int i,c=0;
//	if(strcmp(s,d)>0){// s<d=-1,s=d=0,s>d=1
//		printf("duc dep trai");
//	}else{
//		printf("duc van dep trai");
//	}
	printf("%d",strcmp(s,d));
	//strlwr(s);
	//strcat(s,d) //noi d vo s
	//strcpy(s,d)  // xoa s cho d vao
//	strupr(s);
//	printf("%s",s);
}

//	for(i=0;i<strlen(s);i++){
//	if (isalpha(s[i])){
//		c=1;
//		break;
//}
//}
//	
//	if(c==1){
//	 printf("in thuong");
//}
//    else{
//    	printf("k in thuong");
//	}
//}
//

//char c='Z';
//c=tolower(c);
//printf("%c",c);

