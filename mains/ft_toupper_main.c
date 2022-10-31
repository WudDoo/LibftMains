#include"libft.h"
#include<stdio.h>

int main(void)
{
	char	c;
	int		a;

	printf("Enter a character:\n");
	scanf("%s", &c);
	a = ft_toupper((int)c);
	write(1, &a, sizeof(a));
	return (0);
}
