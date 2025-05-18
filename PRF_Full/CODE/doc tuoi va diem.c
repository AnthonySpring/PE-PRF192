#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
   int age;
   char grade;
   printf("Enter your age and grade:");
   scanf("%d %c",&age,&grade);
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    printf("Age:%d, Grade:%c", age, grade);

    return 0;
}
