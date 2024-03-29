/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:22:47 by abosch            #+#    #+#             */
/*   Updated: 2022/01/11 14:31:59 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	int		i;
	char	*tmp;

	tmp = ft_strnew(len);
	if (!s || tmp == NULL)
		return (NULL);
	i = 0;
	while (len--)
		tmp[i++] = s[start++];
	return (tmp);
}
