/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:31:56 by abosch            #+#    #+#             */
/*   Updated: 2018/11/07 12:56:42 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = -1;
	while (++i < len)
		((unsigned char*)b)[i] = (unsigned char)c;
	return (b);
}