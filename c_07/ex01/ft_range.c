/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:27:00 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/27 20:15:09 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	arr = (int *) malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

int	main(void)
{
	int	*arr;
	int	i;

	arr = ft_range(5, 10);
	i = 0;
	while (arr[i] != '\0')
	{
		printf("%d", arr[i]);
		if (arr[i + 1] != '\0')
			printf(",");
		i++;
	}
	printf("\n");
	return (0);
}
