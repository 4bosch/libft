/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:42:49 by abosch            #+#    #+#             */
/*   Updated: 2021/12/22 02:23:06 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"

char	*ft_itoa(int n)
{
	char		*str;
	int			size;
	long int	tmp;

	size = 1;
	tmp = n;
	while (n /= 10)
		size++;
	str = ft_strnew(size);
	if (!(str))
		return (NULL);
	if (tmp < 0)
	{
		str[size] = '-';
		tmp = -tmp;
	}
	while (tmp)
	{
		str[n++] = (tmp % 10) + '0';
		tmp /= 10;
	}
	if (n != size)
		str[n++] = '0';
	return (ft_strrev(str));
}
