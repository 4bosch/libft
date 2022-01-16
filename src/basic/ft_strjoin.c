/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 11:48:08 by abosch            #+#    #+#             */
/*   Updated: 2022/01/11 14:17:56 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;

	tmp = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!s1 || !s2 || !tmp)
		return (NULL);
	return (ft_strcat(ft_strcpy(tmp, s1), s2));
}
