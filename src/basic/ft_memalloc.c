/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:14:49 by abosch            #+#    #+#             */
/*   Updated: 2022/01/11 14:03:38 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"

void	*ft_memalloc(size_t size)
{
	void	*tmp;

	tmp = malloc(size);
	if (tmp != NULL)
		ft_bzero(tmp, size);
	return (tmp);
}
