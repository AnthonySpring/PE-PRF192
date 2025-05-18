#include<stdio.h>
int reverse_num(int n){ 
  int reverse = 0; 
  while (n > 0) {
    reverse = reverse * 10 + n % 10;
    n /= 10;
  }
  return reverse;
}
int main(){
	int n,c;
	scanf("%d",&n);
	c=reverse_num(n);
	printf("%d",c);
}
//  gets(a)
//  strrev(a);
//  printf("%s",a);
//}

