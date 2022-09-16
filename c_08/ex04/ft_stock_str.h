/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:05:17 by yozdemir          #+#    #+#             */
/*   Updated: 2022/09/16 15:05:17 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H
 
struct s_stock_str  *ft_strs_to_tab(int ac, char **av);

typedef struct s_stock_str
{
    int     size;
    char    *str;
    char    *copy;
}           t_stock_str;

#endif