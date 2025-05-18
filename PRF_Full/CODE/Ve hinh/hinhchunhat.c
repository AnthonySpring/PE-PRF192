#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int rows, cols;
    int i,j; 
    scanf("%d", &rows);
    scanf("%d", &cols);
    if (rows <= 0 || cols <= 0) {
        printf("Invalid input. Number of rows and columns must be greater than 0.\n");
        return 1;
    }
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            printf("*");
        }
        printf("\n");
    }

return 0;
}

