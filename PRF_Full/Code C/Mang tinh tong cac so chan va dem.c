#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i,sum=0,dem=0,n;
  double c;
  scanf("%d",&n);
  int a[n];
  for (i=0;i<n;i++){
  scanf("%d",&a[i]);
}
   for (i=0;i<n;i++){
  	if(a[i]%2==0){
  		sum+=a[i];
  		dem++;
  	}	
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   c=(float)sum/dem;
   printf("%.3lf",c);






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

