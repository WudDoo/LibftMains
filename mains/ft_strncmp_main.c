#include"libft.h"
#include<stdio.h>

int main(int argc, char **argv)
{
	int a;
	int i;

	if (argc != 4)
		return (0);
	a = atoi(argv[3]);
	i = ft_strncmp(argv[1], argv[2], a);
	if (i == 0)
		printf("str1 and str2 are equal");
	else if (i < 0)
		printf("str1 is less than str2");
	else
		printf("str1 is more than str2");
	return(0);
}
