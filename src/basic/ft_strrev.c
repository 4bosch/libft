/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <abosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:54:58 by abosch            #+#    #+#             */
/*   Updated: 2021/12/21 20:58:03 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"

char	*ft_strrev(char *begin)
{
	char		*str_rev;
	int			i;

	i = ft_strlen(begin);
	str_rev = ft_strnew(i);
	if (str_rev)
		while (*begin)
			str_rev[--i] = *begin++;
	return (str_rev);
}
