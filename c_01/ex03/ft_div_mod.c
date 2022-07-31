/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 02:37:25 by yozdemir          #+#    #+#             */
/*   Updated: 2022/07/31 20:26:21 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int	i;
	int	j;
	int	*k;
	int	*l;
	
	i = 100;
	j = 5;
	ft_div_mod(i,j,k,l);
	printf("%u\n%u\n",*k,*l);
}
