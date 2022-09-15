/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:15:53 by yozdemir          #+#    #+#             */
/*   Updated: 2022/09/15 23:15:53 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_point.h"

void    set_point(t_point *point)
{
    point ->x = 42;
    point ->y = 21;
}

int main(void)
{
    t_point point;

    set_point(&point);
    return (0);
}