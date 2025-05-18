//Your C program allow users to enter 4 characters. 
//The system displays the entered characters following alphabetical order. 
//There is a space character between any two adjacent characters. 
//Below is an example of how the program will run 

#include <stdio.h>
#include <conio.h> // for _getch() function

void sort_characters(char arr[], int n) {
    char temp;
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i;
    char chars[4];

    for (i = 0; i < 4; i++) {
        chars[i] = getchar();
        getchar();
    }
    
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:

    sort_characters(chars, 4);
    
    for (i = 0; i < 4; i++) {
        printf("%c", chars[i]);
        if (i < 3) {
            printf(" ");
        }
    }

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
  
}


