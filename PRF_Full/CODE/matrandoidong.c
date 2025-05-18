#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void inputMatrix(int matrix[10][10], int row, int col) {
    int i,j; 
	for ( i = 0; i < row; i++) {
        for ( j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void swapRows(int matrix[10][10], int row, int col, int i, int j) {
    int temp[10];
	int k; 
    for (k = 0; k < col; k++) {
        temp[k] = matrix[i][k];
        matrix[i][k] = matrix[j][k];
        matrix[j][k] = temp[k];
    }

    printf("\nOUTPUT:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main(){
	int row, col,i,j;
    scanf("%d %d", &row, &col);
    int matrix[10][10];
	inputMatrix(matrix,row,col); 
	scanf("%d %d",&i,&j);
    swapRows(matrix, row, col, i, j);
return 0;
}

