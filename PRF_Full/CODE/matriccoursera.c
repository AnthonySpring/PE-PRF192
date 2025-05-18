#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void add_matrices(int **A, int **B, int n, int m, int **C) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}
int main(){
	int n,i,j, m;
	int **A, **B, **C;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	printf("Enter the number of columns: ");
	scanf("%d", &m);
	A = (int **)malloc(n * sizeof(int *));
	B = (int **)malloc(n * sizeof(int *));
	C = (int **)malloc(n * sizeof(int *));
	for ( i = 0; i < n; i++) {
		A[i] = (int *)malloc(m * sizeof(int));
		B[i] = (int *)malloc(m * sizeof(int));
		C[i] = (int *)malloc(m * sizeof(int));
	}
	printf("Enter the elements of matrix A: \n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	printf("Enter the elements of matrix B: \n");
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	add_matrices(A, B, n, m, C);
	printf("The sum of the matrices is: \n");
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			printf("%d ", C[i][j]);
		}
	printf("\n");
	}

return 0;
}

