#include	"matrix.h"


matrix	error_matrix()						// Return an error matrix
{
	matrix	error_matrix;

	error_matrix.row = 0;
	error_matrix.column = 0;
	error_matrix.coeff = NULL;
	return error_matrix;
}


float	*list(int howMany, ...)				// Return a list, first arg is the side of the list
{
	va_list	valist;
	float	*l;

	l = (float*)malloc(sizeof(float) * howMany);
	va_start(valist, howMany);
	for(int i = 0 ; i < howMany ; i++)
		l[i] = (float)va_arg(valist, double);
	va_end(valist);
	return l;
}


void	display_matrix(matrix *m)			// Display a matrix
{
	for(int r = 0 ; r < m->row ; r++)
		for(int c = 0 ; c < m->column ; c++)
			printf("%f%s", m->coeff[r][c], c == m->column - 1 ? "\n" : "\t");
	printf("\n\n\n");
}