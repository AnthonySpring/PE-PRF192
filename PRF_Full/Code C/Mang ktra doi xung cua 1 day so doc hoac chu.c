#include <stdio.h>//ktra chuoi chu doi int sang char(3 cai )
#include <stdlib.h>
#include <string.h>
#include <math.h>
int i;
int syn(int str[],int n){
	int left=0;
	int right=n-1;
	while(left<right){
		if(str[left]!=str[right]){
			return 0;
		}
		right--;
		left++;
		
	}
	return 1;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  int arr[1000];
  scanf("%d",&n);
  for(i=0;i<n;i++){
  	scanf("%d",&arr[i]);
}
  int x=syn(arr,n);
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
printf("%d",x);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
