/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:50:30 by yozdemir          #+#    #+#             */
/*   Updated: 2022/08/04 15:52:46 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char		*ft_strstr(char *str, char *to_find);

int	main()
{
	char	str[] = "penguenler pinguin";
	char	to_find[] = "ingu";

	printf("%s\n", ft_strstr(str, to_find));
}
