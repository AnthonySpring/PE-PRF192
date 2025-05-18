#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		
	}


    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    int j;
    for(i=0; i<n-1; i++){ 
    	for(j=i+1; j<n; j++){
    		if(a[i]!=0 && a[j]%2!=0 && a[i]==a[j]){
    			a[j]=0;
			}
		}
	}

	for(i=0; i<n; i++){
		if(a[i]!=0){
			printf("%d",a[i]);
		}
	
	}

    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
