#include <stdio.h>
#include "Libft.h"
int	main(int argc, char **argv)
{
	long long unsigned int a;
	int b;

	if (argc == 1 || argc > 4)
		return(0);
	a = atoi(argv[3]);
	b = ft_strlcpy(argv[1], argv[2], a);
	printf("src: %s\ndest: %s\nsrc_size: %d\n", argv[1], argv[2],b);
	return(0);
}
