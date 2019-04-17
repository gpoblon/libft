/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_wrap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 11:12:39 by gpoblon           #+#    #+#             */
/*   Updated: 2019/04/16 16:40:48 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "err.h"
#include "print.h"
#include "ft_printf.h"
#include "str.h"

int		ft_err_print(const char *message)
{
	ft_putstr("\033[31m");
	ft_putendl(message);
	ft_putstr("\033[0m");
	return (-1);
}

int		ft_err_struct(const char *message, char **err_buf)
{
	if (err_buf)
	{
		if (*err_buf)
			free(*err_buf);
		*err_buf = ft_strdup(message);
	}
	ft_printf("{R}%s{E}\n", message);
	return (-1);
}
