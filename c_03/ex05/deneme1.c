/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:13:08 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/19 22:34:36 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[] = "abcdefg";
	char	src[] = "hijklmn";
	unsigned int	size = 5;

	printf("Before\n	dest:	%s\n	src:	%s\n	size:	%d\n", dest, src, size);
	size = strlcat(dest, src, size);
	printf("After\n	dest:	%s\n	src:	%s\n	size:	%d\n", dest, src, size);
}
