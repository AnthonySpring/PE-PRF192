#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int hamktrasodx(int n) {
    int reversed = 0, original = n;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i,n,c=0;
  scanf("%d",&n);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
if (hamktrasodx(n) == 1) {
        printf("%d is a palindrome number", n);
    } else {
        printf("%d is not a palindrome number", n);
    }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
