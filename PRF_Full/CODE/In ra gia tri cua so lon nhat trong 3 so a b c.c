#include <stdio.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

  // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("%d\n", max);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}

