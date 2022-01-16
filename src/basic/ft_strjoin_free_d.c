/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_d.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 16:18:01 by abosch            #+#    #+#             */
/*   Updated: 2022/01/11 14:20:57 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free_d(char const *s1, char const *s2, char c)
{
	char	*res;

	res = ft_strjoin(s1, s2);
	if (res != NULL)
	{
		if (c == 'b')
		{
			ft_strdel((char **)&s1);
			ft_strdel((char **)&s2);
		}
		else if (c == 'l')
			ft_strdel((char **)&s1);
		else if (c == 'r')
			ft_strdel((char **)&s2);
	}
	return (res);
}
