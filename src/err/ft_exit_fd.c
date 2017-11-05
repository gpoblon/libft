/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 11:12:39 by gpoblon           #+#    #+#             */
/*   Updated: 2017/03/29 01:19:29 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_exit_fd(const char *message, int fd)
{
	if (fd == 2)
	{
		if (message != NULL)
		{
			ft_printf("{R}%s{E}\n", message);
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		if (message != NULL)
			ft_printf("{C}%s{E}\n", message);
		exit(EXIT_SUCCESS);
	}
}

void	ft_exit_perror_fd(const char *message, int fd)
{
	if (fd == 2)
	{
		if (message != NULL)
		{
			ft_printf("{R}");
			perror(message);
			ft_printf("{E}\n");
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		if (message != NULL)
			ft_printf("{C}%s{E}\n", message);
		exit(EXIT_SUCCESS);
	}
}
