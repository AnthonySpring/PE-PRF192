#include<stdio.h>
#include<string.h>
int main(){
	char ds[5][50];
	char temp[50];
	int i,j;
	for(i=0;i<5;i++){
	   gets(ds[i]);
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(strcmp(ds[i],ds[j])>0){
				strcpy(temp,ds[i]);
				strcpy(ds[i],ds[j]);
				strcpy(ds[j],temp);
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%s\n",ds[i]);
	}
	return 0;
}
