#include"libft.h"
#include<stdio.h>

int main(void)
{
	int	c;

	printf("Enter a decimal number:\n");
	scanf("%d", &c);
	if (ft_isprint(c))
	{
		printf("That is a printable character:\n");
		write(1, &c, 1);
		printf("\n")
	}
	else
		printf("That is NOT a printable character");
}