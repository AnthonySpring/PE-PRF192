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


    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
   /*int count=0;
   int count1=0; 
   int count2=0; 
   int t=0;*/

int count=0;
for (i=0; i<n;i++){
	if (a[i]%2==0&&a[i]>='0'&& a[i]<='9'){
	
		count ++;
	}
	
	
}printf("%d",count );


	/*if (a[i]>='0'&& a[i]<='9'){
		
		count ++;
	

	}else if (a[i]>='a'&&a[i]<='z'){
		 
		count1 ++;
		
	}else if(a[i]>='A'&&a[i]<='Z'){
	    
		count2 ++;
	
	}else {
	   t++;
	}
}	

	printf("so %d\n", count);
	printf("thuong %d\n", count1);
	printf("hoa %d\n", count2);
	printf("ki tu %d\n", t);*/
	
	
	
    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
