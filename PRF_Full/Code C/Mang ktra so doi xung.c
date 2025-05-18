#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int hamktrasodx(int n) {
    int reversed = 0, original = n;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i,n;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++){
  	printf("arr[%d] = ",i);
  	scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++){
  	printf("   %d   ",arr[i]);
  }
  
  
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<n;i++){
  	if(hamktrasodx(arr[i])==1){
  		printf("%d ",arr[i]);
	  }
	}
  







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


