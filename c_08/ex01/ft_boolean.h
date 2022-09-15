/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozdemir <yozdemir@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:53:27 by yozdemir          #+#    #+#             */
/*   Updated: 2022/09/15 15:53:27 by yozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <unistd.h>

typedef enum bool{
	false = 0,
	true = 1,
}	t_bool;

#define EVEN(nbr) nbr % 2 == 0
#define EVEN_MSG "I have an even number"
#define ODD_MSG "I have an odd number"
#define TRUE 1
#define FALSE 0
#define SUCCESS 0

#endif