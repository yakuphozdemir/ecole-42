/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:04:26 by yozdemir          #+#    #+#             */
/*   Updated: 2022/07/31 21:23:43 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr()
{
	char	*str;
	int	i;

	i = 0;
	str = "string";
	while (!(str[i] == '\0'))
	{
		write(1, &str[i], 1);
		i++;
	}
	printf("\n");
}

int	main()
{
	ft_putstr();
}
