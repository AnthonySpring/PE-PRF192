#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isprimenumber(int n){
	int i;
int count = 0;

	for (i=1; i<=n; i++){
		if(n%i==0){
			count ++;
		}
	}
	if (count ==2){
		return 1;
	}
	return 0; 
}

void average(int n){
	int i;
	int sum=0, count =0;
	for(i=1; i<n ;i++){
		if (isprimenumber(i)==1){
		count ++;
		sum+=i;
		}
		
		
	}
	
	printf("%.2f", (float)sum/count);
	
}


int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
int n;
scanf("%d",&n);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
  
average(n);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
