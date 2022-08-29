/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:29:30 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/27 19:24:12 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	cp1[] = "string";
	char	*cp2 = "giv giv";

	printf("ilk cp2	%s\n", cp2);
	cp2 = strdup(cp1);
	printf("son cp1	%s\n", cp1);
	printf("son cp2	%s\n", cp2);
}
