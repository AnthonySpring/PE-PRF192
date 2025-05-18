#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void inputMatrix(int matrix[10][10], int row, int col) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void swapColumns(int matrix[10][10], int row,int col, int col1, int col2) {
	int i,j; 
    /*if (col1 < 0 || col1 >= col || col2 < 0 || col2 >= col) {
        printf("Invalid column indices\n");
        return;
    }*/
    for ( i = 0; i < row; i++) {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }

    printf("\nOUTPUT:\n");
    for ( i = 0; i < row; i++) {
        for ( j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row, col, col1, col2;
    scanf("%d %d", &row, &col);
    if (row > 10 || col > 10) {
        printf("Invalid matrix dimensions\n");
        return 1;
    }

    int matrix[10][10];
    inputMatrix(matrix, row, col);

    scanf("%d %d", &col1, &col2);
    swapColumns(matrix, row,col, col1, col2);

    return 0;
}


