/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 14:17:52 by abosch            #+#    #+#             */
/*   Updated: 2021/12/29 12:54:03 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H
# include <stdarg.h>

int				ft_printf(const char * fmt, ...);
int				ft_dprintf(int fd, const char * fmt, ...);
int				ft_vdprintf(int fd, const char * fmt, va_list ap);

#endif
