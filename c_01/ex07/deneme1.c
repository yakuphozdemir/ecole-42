/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:20:33 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/14 21:04:31 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tab2[size];
	int	i;
	
	while (i < size)
	{
		tab2[i] = tab[(size - 1) - i];
		i++;
	}
	tab = tab2;
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}

int	main(void)
{
	int	tab[] = {1 , 2, 3 ,4 , 5};
	int	size = 5;

	ft_rev_int_tab(tab, size);
}
