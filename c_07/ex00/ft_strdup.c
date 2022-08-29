/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:50:53 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/27 19:35:30 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*src2;

	size = 0;
	while (src[size] != '\0')
		size++;
	src2 = (char *) malloc((size + 1) * sizeof(char));
	i = 0;
	while (i < size)
	{
		src2[i] = src[i];
		i++;
	}
	src2[i] = 0;
	return (src2);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_strdup(argv[1]));
	return (0);
}
