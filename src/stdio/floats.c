/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floats.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:51:18 by abosch            #+#    #+#             */
/*   Updated: 2022/01/20 20:41:05 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "internal/floats.h"
#include <string.h>

size_t	count_decimal(long double nbr)
{
	size_t	size;
	char	whole;

	size = 0;
	while (nbr > 0)
	{
		nbr *= 10;
		whole = nbr;
		nbr -= whole;
		++size;
	}
	return (size);
}

char	*get_decimal(long double nbr, unsigned int precision, size_t size)
{
	char	*res;
	size_t	i;
	char	whole;

	if (precision > size)
		size = precision;
	res = ft_strnew(size);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		nbr *= 10;
		whole = nbr;
		nbr -= whole;
		res[i] = '0' + whole;
		++i;
	}
	return (res);
}

void	round_cascade(char *str, intmax_t *i)
{
	while (str[*i] == '9')
	{
		str[*i] = '0';
		--(*i);
	}
	if (str[*i] == '.')
	{
		--(*i);
		while (str[*i] == '9' && *i >= 0)
		{
			str[*i] = '0';
			--(*i);
		}
	}
}

char	*round_float(char *str, unsigned int precision)
{
	intmax_t	i;
	char		next;

	i = 0;
	while (str[i] != '.')
		++i;
	i += precision;
	next = str[i + 1];
	str[i + 1] = 0;
	if (next >= '5')
	{
		round_cascade(str, &i);
		if (i < 0)
		{
			str[0] = '0';
			str = ft_strjoin_free("1", str, 'r');
			if (str == NULL)
				return (NULL);
		}
		else
			str[i] += 1;
	}
	return (str);
}

char	*ftoa(long double nbr, unsigned int precision)
{
	char		*res;
	intmax_t	whole;

	whole = nbr;
	nbr -= whole;
	if (nbr < 0)
		nbr = -nbr;
	res = ft_llitoa(whole);
	if (res == NULL)
		return (NULL);
	res = ft_strjoin_free(res, ".", 'l');
	if (res == NULL)
		return (NULL);
	res = ft_strjoin_free(res,
			get_decimal(nbr, precision, count_decimal(nbr)), 'b');
	if (res == NULL)
		return (NULL);
	res = round_float(res, precision);
	return (res);
}
