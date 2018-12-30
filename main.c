#include	"matrix.h"


int	main(int argc, char const *argv[])
{
	matrix	m;
	matrix	id;
	matrix	p;

	if(argc != 2)
		return 0;

	id = id_matrix(atoi(argv[1]));
	m = sum_matrix(&id, &id);
	m.coeff[1][0] = 2;
	display_matrix(&m);
	p = product_matrix(&m, &m);
	display_matrix(&p);
	return 0;
}