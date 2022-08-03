/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:01:58 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/03 22:03:20 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index;
	unsigned int count;

	index = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while ((src[index] != '\0') && (index < (size - 1)))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

int	main()
{
	char	desti[] = "abcdef";
	char	srci[] = "ghijklm";
	unsigned int size = 5;

	printf("BEFORE\n	src: %s\n	des: %s\n	size: %d\n", srci, desti, size);
	
	size = ft_strlcpy(desti, srci, size);

	printf("AFTER\n	src: %s\n	des: %s\n	size: %d\n", desti, srci, size);
}
