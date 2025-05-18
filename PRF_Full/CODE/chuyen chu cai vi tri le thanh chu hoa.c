#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
char str[100];
    gets(str);
    int n = strlen(str);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    // studying programming and swimming
    
    // prf3pro
    // 0123456
    // pRf3pRo
    int i;
    for (i=0; i<n; i++) {
        if(i%2!=0)
            str[i] = toupper(str[i]);
    }
	 printf("%s",str);
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
