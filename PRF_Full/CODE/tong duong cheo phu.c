#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int row, col, sum = 0,i,j;
    scanf("%d %d", &row, &col);

    if (row != col) {
        printf("Matrix must be square\n");
        return 1;
    }

    int matrix[10][10];
    for ( i = 0; i < row; i++) {
        for ( j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for ( i = 0; i < row; i++) {
        sum += matrix[i][row - i - 1];
    }
	printf("\nOUTPUT:\n"); 
    printf("%d\n", sum);


return 0;
}

