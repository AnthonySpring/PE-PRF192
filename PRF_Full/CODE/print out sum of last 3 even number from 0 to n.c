#include <stdio.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i;
    int n;

    while (scanf("%d", &n) != 1 || n < 0) {
        while (getchar() != '\n');
    }
    
  // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

    int count = 0;
    int sum = 0;

    for (i = n; i >= 0; i--) {
        if (i % 2 == 0) {
            sum += i;
            count++;
            if (count == 3) {
                break;
            }
        }
    }
    
    printf("%d\n", sum);



  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
  
}


