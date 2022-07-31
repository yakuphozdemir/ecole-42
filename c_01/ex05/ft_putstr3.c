/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:13:44 by yozdemir          #+#    #+#             */
/*   Updated: 2022/07/30 21:16:34 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr()
{
	char	*str;
	int	i;

	str = "string";
	i = 0;

	while ()
	{
		if (!(str[i] == '\0'))
			ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	ft_putstr();
}
