#include<stdio.h>
int main(){
   int x=5;
   int *ptrx;
   ptrx=x;
   *ptrx=10;
   printf("%d",x);
   return 0;
}

