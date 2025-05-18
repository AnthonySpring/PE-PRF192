#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
   char a[100];
   gets(a);
   int i=0;
   int c=0;
   while(a[i]!='\0'){
   	if(a[i] == 'o' && a[i+1] == 'u'){
   		c++;
		}
		i++;
	}
  	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("%d",c);
}
