/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:53:57 by yozdemir          #+#    #+#             */
/*   Updated: 2022/07/31 20:00:18 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main()
{
	int	*a;
	int	*b;
	int	d;
	int	e;

	d = 10;
	e = 20;
	a = &d;
	b = &e;
	ft_swap(a,b);
	printf("a nin degeri:	%d\nb nin degeri:	%d\n", *a,*b);
}
