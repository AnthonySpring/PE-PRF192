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
void calculateAverageEven(int matrix[10][10], int row, int col) {
    int sum = 0,i,j;
    int count = 0;
    for ( i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (matrix[i][j] % 2 == 1) {
                sum += matrix[i][j];
                count++;
            }
        }
    }

    if (count != 0) {
        double average = (double)sum / count;
        printf("\n%.2f\n", average);
    } else {
        printf("There are no even numbers in the matrix.\n");
    }
}
int main(){
	int row, col;
    scanf("%d %d", &row, &col);

    int matrix[10][10];
    inputMatrix(matrix, row, col);
    calculateAverageEven(matrix,row,col); 
	

return 0;
}

