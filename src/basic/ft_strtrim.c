/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:10:18 by abosch            #+#    #+#             */
/*   Updated: 2022/01/11 14:35:09 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		begin;
	int		end;
	int		i;

	if (!s)
		return (NULL);
	begin = -1;
	end = ft_strlen(s);
	while (ft_isblank(s[++begin]) || s[begin] == '\n')
		;
	while (ft_isblank(s[--end]) || s[end] == '\n')
		;
	i = 0;
	if (end < begin)
		res = ft_strnew(1);
	else
		res = ft_strnew(1 + end - begin);
	if (res == NULL)
		return (NULL);
	while (begin <= end)
		res[i++] = s[begin++];
	res[i] = '\0';
	return (res);
}
