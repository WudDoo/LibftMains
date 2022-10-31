#include"libft.h"
#include<stdio.h>

int	main(void)
{
	char	a;
	int		b;

	printf("Enter a character:\n");
	scanf("%s", &a);
	b = ft_tolower((int)a);
	write(1, &b, sizeof(b));
	return (0);
}
