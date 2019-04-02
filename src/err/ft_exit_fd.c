/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 11:12:39 by gpoblon           #+#    #+#             */
/*   Updated: 2019/04/01 11:16:48 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "err.h"
#include "ft_printf.h"

void	ft_exit_fd(const char *message, int fd)
{
	if (message != NULL)
	{
		if (fd != 0)
			ft_printf("{R}%s{E}\n", message);
		else
			ft_printf("{C}%s{E}\n", message);
	}
	exit(fd);
}

void	ft_exit_perror_fd(const char *message, int fd)
{
	if (fd != 0)
	{
		if (message != NULL)
		{
			ft_printf("{R}");
			perror(message);
			ft_printf("{E}\n");
		}
		exit(fd);
	}
	else
	{
		if (message != NULL)
			ft_printf("{C}%s{E}\n", message);
		exit(fd);
	}
}
