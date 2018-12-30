#ifndef			MATRIX_H
#define			MATRIX_H


#include		<stdio.h>
#include		<stdlib.h>


typedef	struct	matrix
{
	int			row;
	int			column;
	float		**coeff;
}				matrix;


// creation.c
matrix			new_matrix(int row, int column);
matrix			id_matrix(int n);
void			free_matrix(matrix *m);
void			display_matrix(matrix *m);
matrix			error_matrix();


// operation.c
matrix			opposite_matrix(matrix *m);
matrix			sum_matrix(matrix* m1, matrix* m2);
matrix			substraction_matrix(matrix* m1, matrix* m2);
matrix			product_matrix(matrix* m1, matrix* m2);


#endif