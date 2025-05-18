/*Question 6:
Your program allows users to enter 5 person names into an array of strings. 
The program performs sorting of the array 
in ascending order then prints each element of 
the array followed by a space character.
*/
	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char arrSt[5][100];
int i=0;
int j=0;
int temp=0;
/*int n=5;
	fflush(stdin);
	for(int i=0;i<n;i++){
		printf("\n arrSt[%d]",i); gets(arrSt[i]); // nhap chuoi thu i
	}
	*/
	fflush(stdin);
	for(i=0;i<5;i++){
		 gets(arrSt[i]); // nhap chuoi thu i
	}

/*	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++){
			if(strcmp(arrSt[i],arrSt[j])>0){ //strcmp(st1,st2) > 0 neu st1>st2
				char temp[61];
				strcpy(temp,arrSt[i]); // temp=arrSt[i]
				strcpy(arrSt[i],arrSt[j]);
				strcpy(arrSt[j],temp);
				
			}
		}
*/
for(i=0;i<4;i++)
		for(j=i+1;j<5;j++){
			if(strcmp(arrSt[i],arrSt[j])>0){ //strcmp(st1,st2) > 0 neu st1>st2
				char temp[100];
				strcpy(temp,arrSt[i]); // temp=arrSt[i]
				strcpy(arrSt[i],arrSt[j]);
				strcpy(arrSt[j],temp);
				
			}
		}

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

  for(i=0;i<5;i++){
  	printf("%s ",arrSt[i]);
	}
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
