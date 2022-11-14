#include <stdio.h>
#include <stdbool.h>

#define MATRIXDIM 4


bool ist_symmetrisch (int matrix[MATRIXDIM][MATRIXDIM]) {
	for (int k = 0; k < MATRIXDIM; k++) {
		for (int h = 0; h < MATRIXDIM; h++) {
			if (matrix[k][h] != matrix[h][k]) {
				return false;
			}
		}
	}
	return true;
}


int main(void) {
	int quad_matrix[MATRIXDIM][MATRIXDIM] = {
		{11, 2, 9, 31},
		{2, 15, 5, 5},
		{8, 5, 7, 11},
		{31, 6, 11, 13}};
	
	if (ist_symmetrisch(quad_matrix)) {
		printf("Matrix ist symmentirsch!\n");
	}
	else {
		printf("Matrix ist nicht symmentrisch!\n");
	}
	
	return 0;
}

