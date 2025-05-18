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

    char substr[100];
    gets(substr);
    int subn = strlen(substr);
    
    



    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    char* pos = str;
    int count = 0;
    do {
        pos = strstr(pos, substr);
        if (pos != NULL) {
            count++;
            pos = pos + 1;
            //pos = pos + subn
        }
    } while(pos != NULL);
    printf("%d", count);




    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
