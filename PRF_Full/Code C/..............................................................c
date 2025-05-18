#include<stdio.h>

char* pop_str(char* a, char chr, char* b){
  int a_cnt;
  int b_cnt = 0;
  /* So sánh t?ng ký t? trong chu?i a v?i ký t? c*/
  for ( a_cnt = 0; a[a_cnt] != '\0'; ++a_cnt ) {
    /* N?u ký t? khác c thì l?y ra và thêm vào k?t qu? */
    if ( a[a_cnt] != chr ) {
      b[b_cnt] = a[a_cnt];
      ++b_cnt;
    }
  }
  b[b_cnt] = '\0'; /* Gán ký t? k?t thúc chu?i '\0' */
  return b;
}

int main(void){
  char a[50] = "abcdcde"; /* Chu?i ban d?u*/
  puts(a);
  
  char b[50]; /* Chu?i k?t qu?*/
  char chr ='e'; /* Ký t? c?n xóa*/
 
  puts(pop_str(a,chr,b));

  return 0;
}
