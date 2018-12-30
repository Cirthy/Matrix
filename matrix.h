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


matrix			new_matrix(int row, int column);
matrix			id_matrix(int n);
void			free_matrix(matrix *m);
void			display_matrix(matrix *m);


#endif