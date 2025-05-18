#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n=6;
	char a[n];
	int i,j;
    for (i=0; i<n; i++){
    	fflush(stdin);
        scanf("%c",&a[i]); 
    }
	
	int t;
	for (i=0; i<n; i++){
    	 for(j=i+1; j<n;j++){
    	 	if (a[i]>a[j]){
    		   t=a[i];
    		   a[i]=a[j];
    		   a[j]=t;
    	 		
			 }
		 }
    }
    
    for (i=0; i<n; i++){
		printf("%c ",a[i]);
	}
    
    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
 



    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
