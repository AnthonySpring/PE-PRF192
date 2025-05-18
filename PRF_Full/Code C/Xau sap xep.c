#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void sapXep(int arr[],int n){//sd bubble sort
	int i,j;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int tg=arr[i];
				arr[i]=arr[j];
				arr[j]=tg;
			}
		}
	}
}

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
  
  sapXep(arr,n);
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
printf("Sau khi sap xep: ");
for(i=0;i<n;i++){
	
	printf(" %d ",arr[i]);
	if(i<n-1){
		printf("->");
	}
}





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
