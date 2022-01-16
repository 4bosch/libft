/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:31:35 by abosch            #+#    #+#             */
/*   Updated: 2022/01/11 14:22:55 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	res;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	res = ft_strlen(src);
	if (len_dst >= size)
		res += size;
	else
		res += len_dst;
	dst += len_dst;
	while (*src && ++len_dst < size)
		*dst++ = *src++;
	*dst = '\0';
	return (res);
}
