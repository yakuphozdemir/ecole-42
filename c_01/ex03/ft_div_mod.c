/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 02:37:25 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/13 22:08:16 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int	for_no_seg_fault1;
	int	for_no_seg_fault2;
	int	i;
	int	j;
	int	*k;
	int	*l;

	i = 100;
	j = 5;
	k = &for_no_seg_fault1;
	l = &for_no_seg_fault2;
	ft_div_mod(i, j, k, l);
	printf("%d\n%d\n",*k,*l);
}
