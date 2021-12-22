/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:31:07 by abosch            #+#    #+#             */
/*   Updated: 2021/12/21 20:45:37 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"

static int	is_skipchar(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

long long	ft_atoll(const char *str)
{
	char		is_neg;
	long long	res;

	is_neg = 1;
	res = 0;
	while (is_skipchar(*str))
		str++;
	if (*str == '-')
	{
		is_neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		res *= 10;
		res += *str++ - 48;
	}
	if (res < 0 && is_neg == 1)
		return (-1);
	else if (res < 0 && is_neg != 1)
		return (0);
	return (res * is_neg);
}
