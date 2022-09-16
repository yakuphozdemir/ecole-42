/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:00:56 by yozdemir          #+#    #+#             */
/*   Updated: 2022/09/17 01:00:56 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
    int     size;
    char    *str;
    char    *copy;
}           t_stock_str;

#endif