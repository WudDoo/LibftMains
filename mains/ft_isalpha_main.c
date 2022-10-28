#include<stdio.h>
#include"libft.h"

int main	(void)
{
	int		a;

	system("cls");
	printf("Enter a character: ");
	scanf("%d", &a);
	if (ft_isalpha(a))
	{
		printf ("%d is an alphabet: ", a);
		write (1, &a, sizeof(a));
		return (0);
	}
	else
		printf ("%d is NOT an alphabet", a);
	return (0);
}
