#include <stdio.h>

/*Hàm tìm s? d?o ngu?c trong C*/
int reverse_num(int n){ 
  int reverse = 0; 
  while (n > 0) {
    reverse = reverse * 10 + n % 10;
    n /= 10;
  }
  return reverse;
}

/*Hàm ki?m tra s? d?i x?ng trong C*/
int symmetrical_num(int n){ 
    // flag = 1 => s? d?i x?ng
    // flag = 0 => không ph?i s? d?i x?ng

  int flag =0;
  if (reverse_num(n) == n) flag = 1;
  return flag;
}

int main(void){
    int n;
    int a;
    printf(">> Nhap so tu nhien= ");
    scanf("%d",&n);
    a=reverse_num(n);
    printf("so doi xung la %d",a);

    int check = symmetrical_num(n);
 
    if( check == 1 ) printf("%d la so doi xung\n", n);
    else printf("%d khong phai la so doi xung\n", n);
    return 0;
}

