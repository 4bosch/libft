/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 14:19:33 by abosch            #+#    #+#             */
/*   Updated: 2022/01/20 20:38:36 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal/parsing.h"
#include <stdarg.h>

int	ft_vdprintf(int fd, const char *fmt, va_list ap)
{
	return (parsing(fd, (char *)fmt, ap));
}

int	ft_dprintf(int fd, const char *fmt, ...)
{
	va_list	ap;
	int		ret;

	va_start(ap, fmt);
	ret = ft_vdprintf(fd, fmt, ap);
	va_end(ap);
	return (ret);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		ret;

	va_start(ap, fmt);
	ret = ft_vdprintf(1, fmt, ap);
	va_end(ap);
	return (ret);
}
