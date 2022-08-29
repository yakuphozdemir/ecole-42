/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:16:25 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/29 22:43:00 by yozdemir         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (!*range)
		return (-1);
	return (max - min);
}

int	main(void)
{
	int	**range;

	printf("max - min = %d\n", ft_ultimate_range(range, 5, 10));
}
