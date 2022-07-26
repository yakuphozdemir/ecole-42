/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:57:57 by yozdemir          #+#    #+#             */
/*   Updated: 2022/07/25 20:48:34 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_char(char	c)
{
	write(1, &c, 1);
}

char	zero_to_nine(char c, char n)
{
	if (n == 0)
		return(c / 10 + 48);
	else
		return(c % 10 + 48);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write_char(zero_to_nine(a, 0));
			write_char(zero_to_nine(a, 1));
			write_char(' ');
			write_char(zero_to_nine(b, 0));
			write_char(zero_to_nine(b, 1));
			if (!(a == 98 &&  b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main()
{
	ft_print_comb2();
}
