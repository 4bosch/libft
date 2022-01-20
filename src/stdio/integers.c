/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:51:56 by abosch            #+#    #+#             */
/*   Updated: 2022/01/20 20:37:58 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal/integers.h"
#include "libft.h"

#include <stdlib.h>

int	get_number(char **str)
{
	int		nbr;

	nbr = 0;
	while (**str >= '0' && **str <= '9')
	{
		nbr *= 10;
		nbr += (**str - 48);
		if (nbr < 0)
			return (0);
		(*str)++;
	}
	return (nbr);
}

static void	nbr_grouping_begin(t_string *conv, size_t *i, int *nsep, int size)
{
	*i = 0;
	while (conv->str[*i] != '.' && conv->str[*i] != '\0')
		*i += 1;
	if ((*i / (float)size) > (*i / size))
		*nsep = *i / size;
	else
		*nsep = *i / size - 1;
}

char	*nbr_grouping(t_string *conv, char sep, unsigned int size)
{
	char	*new;
	size_t	i;
	size_t	j;
	int		nsep;

	nbr_grouping_begin(conv, &i, &nsep, size);
	new = ft_strnew(conv->len + nsep);
	if (new == NULL)
		return (NULL);
	ft_strcpy(new + i + nsep, conv->str + i);
	j = 0;
	while (--i > 0)
	{
		new[i + nsep] = conv->str[i];
		if (++j == size)
		{
			j = 0;
			new[i + --nsep] = sep;
		}
	}
	new[i] = conv->str[i];
	return (new);
}
