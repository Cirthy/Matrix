#include	"matrix.h"


matrix	new_matrix(int row, int column)		// Return a zero-filled matrix
{
	matrix	new_matrix;

	new_matrix.row = row;
	new_matrix.column = column;	
	new_matrix.coeff = (float**)malloc(sizeof(float*) * row);
	for(int r = 0 ; r < row ; r++)
		for(int c = 0 ; c < column ; c++)
			new_matrix.coeff[r] = (float*)calloc(column, sizeof(float));
	return new_matrix;
}

matrix	id_matrix(int n)					// Return the identity matrix n*n
{
	matrix	id;

	id = new_matrix(n, n);
	for(int i = 0 ; i < n ; i++)
		id.coeff[i][i] = 1;
	return id;
}

void	free_matrix(matrix *m)				// Free a matrix' memory
{
	for(int r = 0 ; r < m->row ; r++)
		free(m->coeff[r]);
	free(m->coeff);
}

void	display_matrix(matrix *m)			// Display a matrix
{
	for(int r = 0 ; r < m->row ; r++)
		for(int c = 0 ; c < m->column ; c++)
			printf("%f%s", m->coeff[r][c], c == m->column - 1 ? "\n" : "\t");
}