#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
int n, sd, sc, s;
scanf("%d",&n);


    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    sd=n;
    while(sd>10){
    	sd/=10;
   	}
	sc=n%10;
  	s=sd+sc;

 
  printf("%d",s);


    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
