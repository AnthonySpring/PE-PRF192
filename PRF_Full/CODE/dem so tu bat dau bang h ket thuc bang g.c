#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	char s[100];
	gets(s);
	int count=0;
	char *taken = strtok(s, " ");
	while(taken !=NULL){
		if(taken[0]== 'h' && taken[strlen(taken)-1] == 'g'){
			count ++;
		}
		taken = strtok(NULL, " ");
	}


    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    

	printf("%d",count);

    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
