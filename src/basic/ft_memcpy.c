/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:58:12 by abosch            #+#    #+#             */
/*   Updated: 2022/01/11 14:11:18 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cnt;

	cnt = -1;
	while (++cnt < n)
		((unsigned char *)dst)[cnt] = ((unsigned char *)src)[cnt];
	return (dst);
}
