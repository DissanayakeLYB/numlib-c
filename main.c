#include <stdio.h>

typedef struct {
	int rows;
	int columns;
} matrix;

matrix create_matrix() {
	
	matrix matrixA;

	printf("Enter the number of rows: ");
	scanf("%d", &matrixA.rows);
	
	printf("Enter the number of columns: ");
	scanf("%d", &matrixA.columns);

	printf("Matrix format: (%d,%d)\n", matrixA.rows, matrixA.columns);
	
	return matrixA;
}

int main() {

	matrix matrixA = create_matrix();
	printf("Matrix: (%d, %d)", matrixA.rows, matrixA.columns);
	return 0;

};

