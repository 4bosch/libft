/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_printable.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <adam_bai@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 16:08:02 by abaisago          #+#    #+#             */
/*   Updated: 2022/01/11 14:02:15 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"

static char	*get_new_size(char *str)
{
	size_t	i;
	size_t	cnt;

	i = -1;
	cnt = 0;
	while (str[++i] != '\0')
		if (!ft_isprint(str[i]))
			++cnt;
	str = ft_strnew(i + (cnt * 4));
	return (str);
}

char	*ft_make_printable(char *str)
{
	char	*new;
	char	*tmp;
	size_t	i;

	new = get_new_size(str);
	if (new != NULL)
	{
		i = 0;
		while (*str != '\0')
		{
			if (!ft_isprint(*str))
			{
				new[i++] = '\\';
				tmp = ft_llitoa_base(*str, 8);
				ft_strcpy(new + i, tmp);
				i += ft_strlen(tmp) - 1;
				ft_strdel(&tmp);
			}
			else
				new[i] = *str;
			++i;
			str++;
		}
	}
	return (new);
}
