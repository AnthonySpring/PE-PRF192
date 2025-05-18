#include <stdio.h>
#include <string.h>
#define SIZE 5
#define MAX_LEN 100

void sort_names(char names[SIZE][MAX_LEN]) {
    char temp[MAX_LEN];
    int i, j;
    for (i = 0; i < SIZE - 1; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i;
    char names[SIZE][MAX_LEN];

    for (i = 0; i < SIZE; i++) {
        scanf("%s", names[i]);
    }
    
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

    sort_names(names);

    for (i = 0; i < SIZE; i++) {
        printf("%s", names[i]);
        if (i < SIZE - 1) {
            printf(" ");
        }
    }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

