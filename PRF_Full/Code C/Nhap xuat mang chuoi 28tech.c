#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//fgets doc ca phim enter in ra them 1 ki tu
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char a[100];
  int x;
  scanf("%d",&x);
                                    //c3 fgets(a,20,stdin);//chi in ra 9 ki tu thoi ki tu 10 la null '\0\ 
   //c2: scanf("%d\n",&x);               //a[strlen(a)-1]='\0';
         //scanf("%s",a); 
  getchar();
  gets(a);
//  char b[100]={'a','b','c'};
  //printf("%s",a);
  //char s[100]="Chu The Duc";
  //s[3]='\0';
  printf("%s\n",a);
  
  printf("%d",strlen(a));
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
