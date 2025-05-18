#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Không ph?i s? nguyên t?
    }
    int i;
    for ( i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Không ph?i s? nguyên t?
        }
    }
    return 1; // Là s? nguyên t?
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
   int i,n;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
   	scanf("%d",&a[i]);
    }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<n;i++){
    	if(isPrime(a[i])==1){
    		printf("%d\n",a[i]);
		}
	}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
