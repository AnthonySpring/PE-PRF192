#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int row;
	scanf("%d",&row);
	int a[row][row];
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			scanf("%d",&a[i][j]);
		}
	} 
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
// int max = a[0][0];
// for(i=0;i<row;i++){
// 	if(max < a[i][i]){
// 		max = a[i][i];
//	 }
// }
// printf("%d",max);
/*/tim max tren tung hang ma tran
	for(i=0;i<row;i++){
		int max = a[i][0];
		for(j=0;j<row;j++){
			if(max < a[i][j]){
				max = a[i][j];
			}
		}
		printf("%d ",max);
	}
	*/
//tim max tren tung cot
	for(j=0;j<row;j++){
		int max = a[0][j];
		for(i=0;i<row;i++){
			if(max < a[i][j]){
				max = a[i][j];
			}
		}
		printf("%d ",max);
	}

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
