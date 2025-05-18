#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a[5];
  int i;
  for(i=0;i<5;i++){
  	scanf("%d",&a[i]);
  }
  int max=a[0];
  

  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for(i=0;i<5;i++){
  	if(a[i]%2==0 && a[i]>max){
  		max=a[i];
	  }
  }
  printf("%d",max);






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
