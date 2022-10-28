/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpymain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:02:33 by mortins-          #+#    #+#             */
/*   Updated: 2022/10/28 16:10:51 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	long long unsigned int	a;
	int						b;

	system("cls");
	if (argc != 4)
		return (0);
	a = atoi(argv[3]);
	b = ft_strlcpy(argv[1], argv[2], a);
	printf("src: %s\ndest: %s\nsrc_size: %d\n", argv[2], argv[1], b);
	return (0);
}
