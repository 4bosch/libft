/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:43:55 by abosch            #+#    #+#             */
/*   Updated: 2021/12/21 20:43:27 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"
#include <string.h>

/*
** Changes an integer to it's absolute value and
** outputs 1 if it has changed, 0 otherwise.
*/

int	ft_abs(intmax_t *n)
{
	if (*n < 0)
	{
		*n = -(*n);
		return (1);
	}
	return (0);
}
