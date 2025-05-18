#include<stdio.h>
int main(){
  int x;
  int y;
  do {
  	scanf("%d %d",&x,&y);
  if (x!=0 && y!=0){
    int t=x;
  	x=y;
  	y=t;
  printf("%d %d",x,y);	
  }
  	
  }while(x!=0 && y!=0);
  
  return 0;
}
