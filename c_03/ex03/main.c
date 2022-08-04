/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:15:26 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/04 15:17:31 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char	dest[] = "append";
	char	src[] = "ustune ependler";
	unsigned int nb = 8;

	printf("%s\n", ft_strncat(dest, src, nb));
}
