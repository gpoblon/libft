/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrprint_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:49:28 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 12:18:08 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sstr.h"
#include "print.h"

void	ft_sstrprint_fd(int fd, char **list, char sep)
{
	int		i;

	i = 0;
	if (!list || !*list)
		return ;
	while (list[i])
	{
		ft_putstr_fd(list[i++], fd);
		if (list[i])
			ft_putchar_fd(sep, fd);
	}
}
