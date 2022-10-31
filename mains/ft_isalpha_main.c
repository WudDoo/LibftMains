#include<stdio.h>
#include"libft.h"

int main(void)
{
	int	a;

	printf("Enter a decimal number:\n");
	scanf("%d", &a);
	if (ft_isalpha(a))
	{
		printf ("That is an alphabet in the ASCII table.");
		return (0);
	}
	else
		printf ("That is NOT an alphabet in the ASCII table.");
	return (0);
}
