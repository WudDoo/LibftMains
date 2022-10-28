/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcatmain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:07:51 by mortins-          #+#    #+#             */
/*   Updated: 2022/10/28 16:24:41 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	long long unsigned int	a;

	if (argc != 4)
		return (0);
	a = atoi(argv[3]);
	printf("Before using the function\n");
	printf("src: %s\n", argv[2]);
	printf("dst: %s\n", argv[1]);
	printf("dstsize: %s\n", argv[3]);
	ft_strlcat(argv[1], (const char *)argv[2], a);
	printf("After using the function\n");
	printf("src: %s\n", argv[2]);
	printf("dst: %s\n", argv[1]);
	printf("dstsize: %d\n", ft_strlcat(argv[1], (const char *)argv[2], a));
	return (0);
}
