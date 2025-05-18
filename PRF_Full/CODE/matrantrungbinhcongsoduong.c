#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void inputMatrix(int matrix[10][10], int rows, int cols) {
    int i,j; 
	for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
float averagePositiveNumbers(int matrix[10][10], int rows, int cols) {
    int count = 0;
    float sum = 0;
	int i,j; 
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            if (matrix[i][j] > 0) {
                sum += matrix[i][j];
                count++;
            }
        }
    }

    if (count == 0) {
        return 0;
    } else {
        return sum / count;
    }
}
int main(){
	 int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[10][10];
    inputMatrix(matrix, rows, cols);

    float avg = averagePositiveNumbers(matrix, rows, cols);
    printf("\n%.2f\n", avg);
return 0;
}

