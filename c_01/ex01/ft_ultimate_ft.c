/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:16:45 by yozdemir          #+#    #+#             */
/*   Updated: 2022/07/31 17:38:54 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int	*********nbr)
{
	*********nbr = 42;
}

int	main()
{
	int	*********p1;	// char
	int	********p2;		// char *
	int	*******p3;		// char **
	int	******p4;		// char ***
	int	*****p5;		// char ****
	int	****p6;			// char *****
	int	***p7;			// char ******
	int	**p8;			// char *******
	int	*p9;			// char ********
	int x;				// char

	x = 5;
	p9 = &x;
	p8 = &p9;
	p7 = &p8;
	p6 = &p7;
	p5 = &p6;
	p4 = &p5;
	p3 = &p4;
	p2 = &p3;
	p1 = &p2;

	ft_ultimate_ft(p1);
	printf("%d\n", x);
}
