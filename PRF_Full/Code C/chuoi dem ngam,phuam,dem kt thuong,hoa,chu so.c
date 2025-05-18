#include<string.h>
#include<stdio.h>
void dem(char s[]){
	int i,n=strlen(s),ngAm = 0,phuAm = 0,inhoa=0,inthuong=0,count=0;
	char s1[100];
	strcpy(s1,s);
	strupr(s1);//doi in hoa
	for (i=0;i<n;i++){
		if(s1[i]>='A'&&s1[i]<='Z'){
			if(s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'){
			   ngAm++;
			}else{
				phuAm++;
			}
		}
		if(s[i]>='A'&&s[i]<='Z'){                        
			inhoa++;
			}else if(s[i]>='a'&&s[i]<='z'){
				inthuong++;
			}
//			if (isupper(s[i])) {
//            inhoa++;
//        } else if (islower(s[i])) {
//            inthuong++;
	if (isdigit(s[i])) {//ktra chu so
            count++;
        }
}	
printf("so lg nguyen am:%d, phu am: %d",ngAm,phuAm);
printf("\nSo ky tu in hoa %d, in thuong %d",inhoa, inthuong);
printf("\nSo chu so la %d",count);
}
int main(){
	char s[100];
	gets(s);
	dem(s);
	return 0;
}

