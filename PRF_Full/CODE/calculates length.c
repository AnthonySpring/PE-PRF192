/*Exercise 3: String Length: Write a program that calculates the length of a user input 
string without using the strlen function.
+ Input: A single string from the user.
+ Output: The length of the input string.*/
#include <stdio.h>
#include <stdlib.h>
int main() { 
system("cls");
//INPUT-@STUDENT:ADD YOUR CODE FOR INPUT HERE:
char inputString[100];
printf("Enter string:");
scanf("%^\n", inputString);
int length; //luu tru do dai chuoi
while (inputString[length] != '\0'){
    length++;
}
// Calculate string length without using strlen
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
printf("The length of the input string is: %d\n", length);
//--FIXED PART-DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}
