#include<stdio.h>
#include<stdlib.h>
int main (){
	int i,y;
	int x;
    srand(time(NULL));
    x=rand()%(100-1+1)+1;
    printf("so ngau nhien tu 1 den 100 la %d ",x);	
    do{
       printf("\nnhap y=");
       scanf("%d",&y);
       i++;
    if (y==x){
    	printf("\ndoan dung r");
    	break;
	}
    if (y>x){
    	printf("\ndoan so nho hon");
	}else{
		printf("\n doan so lon hon ");
	}
	}while(y!=x);
return 0;
}
