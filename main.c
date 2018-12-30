#include	"matrix.h"


int	main(int argc, char const *argv[])
{
	if(argc != 2)
		return 0;
	matrix m;

	m = id_matrix(atoi(argv[1]));
	display_matrix(&m);
	free_matrix(&m);
	return 0;
}