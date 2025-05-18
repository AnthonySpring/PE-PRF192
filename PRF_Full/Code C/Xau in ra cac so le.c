#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i,n;
  printf("Enter n = ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++){
  	printf("arr[%d] = ",i);
  	scanf("%d",&arr[i]);
}
 for(i=0;i<n;i++){
	  printf("%d ",arr[i]);
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<n;i++){
  	if(arr[i]%2!=0){
  		printf("%d ",arr[i]);
	  }
  }







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
