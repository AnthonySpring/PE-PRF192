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
void transposeMatrix(int matrix[10][10], int row, int col) {
    int transpose[10][10];
	int i,j; 
    for ( i = 0; i < col; i++) {
        for ( j = 0; j < row; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
    printf("\nOUTPUT:\n"); 
    for ( i = 0; i < col; i++) {
        for ( j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
int main(){
	int row, col;
    scanf("%d %d", &row, &col);
    int matrix[10][10];
    inputMatrix(matrix, row, col);
    transposeMatrix(matrix,row,col); 

return 0;
}

