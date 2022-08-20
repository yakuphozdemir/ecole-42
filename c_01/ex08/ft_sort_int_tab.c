/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:29:32 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/14 21:12:14 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int	*tab, int size)
{
	int	min[2];
	int	index1 = 0;
	int	index2 = 0;

	while (index1 < size)
		{
			index2 = index1;
			min[0] = tab[index2];
			min[1] = index2;
			while (index2 < size)
			{
				if (min[0] > tab[index2])
				{
					min[0] = tab[index2];
					min[1] = index2;
				}
				index2++;
			}
			tab[min[1]] = tab[index1];
			tab[index1] = min[0];
			index1++;
		}
}

int	main()
{
	int	tab[] = {5, 2, 4, 3};
	int	size = 4;
	int	index = 0;
	ft_sort_int_tab(tab, size);
	while (index < size)
		printf("%d\n", tab[index++]);
}
