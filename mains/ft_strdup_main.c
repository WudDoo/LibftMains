#include"libft.h"
#include<stdio.h>

int main(void)
{
	char *dest;
	char src[10000];

	printf("Write the string you want to duplicate: ");
	fgets(src, sizeof(src), stdin);
	dest = ft_strdup(src);
	if (strncmp(src, dest, 10000) == 0)
	{
		printf("> OK!\n");
		printf("src: %s", src);
		printf("dest: %s", dest);
	}
	else
		printf("> KO\nD:");
	return (0);
}
