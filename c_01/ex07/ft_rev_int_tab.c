/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:23:52 by yozdemir          #+#    #+#             */
/*   Updated: 2022/07/31 21:56:45 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index;

	index = 0;
	while (index < size / 2)
	{
		temp = tab[index];
		tab[index] = tab[size - (index + 1)];
		tab[size - (index + 1)] = temp;
		index++;
	}
}

int	main()
{
	int size = 6;
	int	tab[] = {1, 2, 3, 4 ,5, 6};

	ft_rev_int_tab(tab, size);

	int	index = 0;
	printf("tab = { ");
	while (index < size)
	{
		printf("%d",tab[index]);
		if (index != size -1)
			printf(", ");
		index++;
	}
	printf("}\n");
}
