/*Exercise 1: Declare and Initialize Strings: Write a program to declare two strings: 
one using array notation and another using pointer notation. Initialize both strings 
with the same sentence and print them.
+ Input: No input required
+ Output: Print two identical sentences, one using array notation and the other 
using pointer notation.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
system("cls");
char s1[100]= "Hello everyone";
char *s2= "Hello everyone"; 
printf("\nOUTPUT:\n");
printf("%s\n",s1);
printf("%s\n",s2);
printf("\n");
system ("pause");
return(0);
}
