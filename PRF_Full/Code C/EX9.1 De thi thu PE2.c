#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//void searchNames(char names[][50], int n, char searchKey) {
//    int i;
//    for ( i = 0; i < n; i++) {
//        if (strchr(names[i], searchKey) != NULL) {
//            printf("%s\n", names[i]);
//        }
//    }
//}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i,n;
  scanf("%d",&n);
  char a[n][50];
  for(i=0;i<n;i++){
  	scanf("%s",a[i]);
  	
  }
  
  char kitu[10];
  scanf("%s",kitu);
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<n;i++){
  	if(strstr(a[i],kitu)!=NULL){
  		printf("%s\n",a[i]);
	  }
  }
  strupr(kitu);
  for(i=0;i<n;i++){
  	if(strstr(a[i],kitu)!=NULL){
  		printf("%s\n",a[i]);
	  }
  }
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
