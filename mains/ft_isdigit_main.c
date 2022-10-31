#include"libft.h"
#include<stdio.h>

int	main(void)
{
	int	i;

	printf("Enter a decimal number:\n");
	scanf("%d", &i);
	if ((ft_isdigit(i)))
		printf("That is a digit in the ASCII table.");
	else
		printf("That is NOT a digit in the ASCII table.");
	return (0);
}
