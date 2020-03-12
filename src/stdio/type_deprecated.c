/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_deprecated.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:52:37 by abosch            #+#    #+#             */
/*   Updated: 2020/02/20 12:52:38 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal/percent.h"

void	type_dd(va_list ap, t_spec *spec, t_buf *buf)
{
	spec->size = SIZE_L;
	type_di(ap, spec, buf);
}

void	type_oo(va_list ap, t_spec *spec, t_buf *buf)
{
	spec->size = SIZE_L;
	type_o(ap, spec, buf);
}

void	type_uu(va_list ap, t_spec *spec, t_buf *buf)
{
	spec->size = SIZE_L;
	type_u(ap, spec, buf);
}
