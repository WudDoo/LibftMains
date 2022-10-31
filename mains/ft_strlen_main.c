#include"libft.h"
#include<stdio.h>

int main(void)
{
	char	c[10000];

	printf("Write your sentence: ");
	fgets(c, sizeof(c), stdin);
	printf("ft_strlen: %llu characters.\n", ft_strlen(c));
	printf("strlen: %llu characters.", strlen(c));
	return (0);
}
