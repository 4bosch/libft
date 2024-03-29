/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llitosa_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <adam_bai@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 15:39:51 by abaisago          #+#    #+#             */
/*   Updated: 2022/01/11 13:57:05 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"
#include <string.h>
#include <stdint.h>

char	*ft_llitosa_base(int64_t value, int8_t base, char *tab)
{
	size_t		i;

	if (value < 0 && value - 1 > 0 && base == 10)
		ft_strcpy(tab, "-9223372036854775808");
	i = 0;
	if (ft_abs((intmax_t *)&value))
	{
		tab[0] = '-';
		++i;
	}
	ft_getnbr_base(value, base, tab, &i);
	tab[i] = '\0';
	return (tab);
}
