/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 14:32:39 by abosch            #+#    #+#             */
/*   Updated: 2022/01/16 17:56:29 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/list.h"

int	ft_lstlen(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
