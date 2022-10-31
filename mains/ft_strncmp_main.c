#include"libft.h"
#include<stdio.h>

int main(int argc, char **argv)
{
	int a;

	if (argc != 4)
		return (0);
	a = atoi(argv[3]);
	if ((ft_strncmp(argv[1], argv[2], a)) == 0)
		printf("Both strings are equal.\n");
	else if ((ft_strncmp(argv[1], argv[2], a)) < 0)
		printf("The 2nd string is greater.\n");
	else
		printf("The 1st string is greater.\n");
	return(0);
}
