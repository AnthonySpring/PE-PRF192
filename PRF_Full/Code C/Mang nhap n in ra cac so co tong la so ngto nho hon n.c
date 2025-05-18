#include<stdio.h>
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
    return num; // Là s? nguyên t?
}
int tongchuso(int num){
	int sum=0;
    while(num>0){
  	sum+=num%10;
  	num/=10;
}
return sum;
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i,n;
  printf("Enter n = ");
  scanf("%d",&n);

  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for(i=2;i<=n;i++){
   	if(isPrime(tongchuso(i))){
   		printf("%d ",i);
	   }
  }







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
