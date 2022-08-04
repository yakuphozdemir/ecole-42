/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:13:50 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/04 13:17:41 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int	main()
{
	char	s1[] = "yipyip";
	char	s2[] = "yabcde";
	char	s3[] = "yipyip";

	printf("s1-s2:	%d\n", ft_strcmp(s1, s2));
	printf("s1-s3:	%d\n", ft_strcmp(s1, s3));
	printf("s2-s3:	%d\n", ft_strcmp(s2, s3));

}
