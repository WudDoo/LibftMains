#include"libft.h"
#include<stdio.h>

int main(void)
{
	int	a;

	printf("Enter a decimal number:\n");
	scanf("%d", &a);
	if (ft_isalnum(a))
		printf("That is an alphanumeric character in the ASCII table.");
	else
		printf("That is NOT an alphanumeric character in the ASCII table.");
	return (0);
}