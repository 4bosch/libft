/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:20:59 by abosch            #+#    #+#             */
/*   Updated: 2022/01/11 14:24:54 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*tmp;
	int		i;

	if (!s)
		return (NULL);
	tmp = ft_strnew(ft_strlen(s));
	if (tmp != NULL)
	{
		i = 0;
		while (*s)
			tmp[i++] = f(*s++);
	}
	return (tmp);
}
