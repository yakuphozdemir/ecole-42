/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 23:26:00 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/07 23:34:01 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[20] = "123456";
	char	src[] = "abcdefg";
	unsigned int size = 15;

	printf("Before\n	dest:	%s\n	src:	%s\n	size:	%d\n", dest, src, size);
	size = ft_strlcat(dest, src, size);
	printf("Before\n	dest:	%s\n	src:	%s\n	size:	%d\n", dest, src, size);
}
