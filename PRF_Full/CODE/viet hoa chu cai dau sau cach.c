#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    char a[100];
	gets(a);
	int n=strlen(a);

	int i;
	for(i=0;i<n;i++){
		if (i==0||(a[i]>0&&a[i-1]==32)){
			if (a[i]>=97&&a[i]<=122){
			   a[i]-=32;
		   }
		}else{
			if (a[i]>=65&&a[i]<=90){
			   a[i]+=32;
		   }
		}
	}


 
 

 

    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    
printf("%s",a);


    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
