/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:11:32 by abosch            #+#    #+#             */
/*   Updated: 2022/01/11 14:15:49 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (res != NULL)
	{
		i = -1;
		while (s1[++i] != '\0')
			res[i] = s1[i];
		res[i] = '\0';
	}
	return (res);
}
