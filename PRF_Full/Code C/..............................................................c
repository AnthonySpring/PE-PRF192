#include<stdio.h>

char* pop_str(char* a, char chr, char* b){
  int a_cnt;
  int b_cnt = 0;
  /* So s�nh t?ng k� t? trong chu?i a v?i k� t? c*/
  for ( a_cnt = 0; a[a_cnt] != '\0'; ++a_cnt ) {
    /* N?u k� t? kh�c c th� l?y ra v� th�m v�o k?t qu? */
    if ( a[a_cnt] != chr ) {
      b[b_cnt] = a[a_cnt];
      ++b_cnt;
    }
  }
  b[b_cnt] = '\0'; /* G�n k� t? k?t th�c chu?i '\0' */
  return b;
}

int main(void){
  char a[50] = "abcdcde"; /* Chu?i ban d?u*/
  puts(a);
  
  char b[50]; /* Chu?i k?t qu?*/
  char chr ='e'; /* K� t? c?n x�a*/
 
  puts(pop_str(a,chr,b));

  return 0;
}
