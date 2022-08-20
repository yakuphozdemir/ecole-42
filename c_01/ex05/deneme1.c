/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:04:26 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/14 15:12:07 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(void)
{
	char	*str;
	int	i;

	i = 0;
	str = "string";
	while (!(str[i] == '\0'))
		write(1, &str[i++], 1);
	printf("\n");
}

int	main(void)
{
	ft_putstr();
}
