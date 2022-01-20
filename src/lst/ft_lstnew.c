/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:48:16 by abosch            #+#    #+#             */
/*   Updated: 2022/01/20 20:11:43 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/basic.h"
#include "ft/list.h"

static t_list	*malloc_lst(void)
{
	t_list	*tmp;

	tmp = (t_list *)ft_memalloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL);
	tmp->next = NULL;
	return (tmp);
}

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	tmp = malloc_lst();
	if (content && tmp)
	{
		tmp->content = ft_memalloc(content_size);
		if (tmp->content == NULL)
		{
			free(tmp);
			return (NULL);
		}
		ft_memcpy(tmp->content, content, content_size);
		tmp->content_size = content_size;
	}
	else if (content == NULL)
	{
		tmp->content = NULL;
		tmp->content_size = 0;
	}
	return (tmp);
}
