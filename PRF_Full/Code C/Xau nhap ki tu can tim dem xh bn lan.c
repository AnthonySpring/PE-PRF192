#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s[100];
  char ki_tu;
  int i;
  int dem = 0;
  gets(s);
  scanf("%c",&ki_tu);
  for(i=0;i<strlen(s);i++){
  	if(s[i]==ki_tu){	
  		dem++;
	  }
  }
   
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  if (dem != 0) {
        printf("%d",dem);
    }else{
   printf("\nCharacter '%c' not found\n", ki_tu);
}
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
