#include"libft.h"
#include<stdio.h>

int	main(void)
{
	int	c;

	printf("Enter a decimal number:\n");
	scanf("%d", &c);
	if (ft_isascii(c))
		printf("That is an ASCII character.");
	else
		printf("That is NOT an ASCII character.");
	return (0);
}