#include	"matrix.h"


matrix	opposite_matrix(matrix *m)						// Return the additive opposite of a matrix
{
	matrix	o;

	o = new_matrix(m->row, m->column);
	for(int r = 0 ; r < o.row ; r++)
		for(int c = 0 ; c < o.column ; c++)
			o.coeff[r][c] = -m->coeff[r][c];
	return o;
}


matrix	sum_matrix(matrix* m1, matrix* m2)				// Return the sum of two matrices
{
	matrix	s;

	if(m1->row != m2->row || m1->column != m2->column)
		return error_matrix();
	s = new_matrix(m1->row, m1->column);
	for(int r = 0 ; r < s.row ; r++)
		for(int c = 0 ; c < s.column ; c++)
			s.coeff[r][c] = m1->coeff[r][c] + m2->coeff[r][c];
	return s;
}


matrix	substraction_matrix(matrix* m1, matrix* m2)		// Return the difference between two matrices
{
	matrix	o;

	o = opposite_matrix(m2);
	return	sum_matrix(m1, &o);
}


matrix	product_matrix(matrix* m1, matrix* m2)			// Return the product (non-commutative) between two matrices
{
	matrix	p;

	if(m1->column != m2->row)
		return error_matrix();
	p = new_matrix(m1->row, m2->column);
	for (int r = 0; r < p.row; r++)
		for(int c = 0 ; c < p.column ; c++)
			for(int i = 0 ; i < m1->column ; i++)
				p.coeff[r][c] += m1->coeff[r][i] + m2->coeff[i][c];
	return p;
}