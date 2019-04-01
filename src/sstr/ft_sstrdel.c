/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:49:05 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 11:51:31 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sstr.h"

void	ft_sstrdel(char **sstr, int index)
{
	int		i;

	i = index;
	ft_strdel(&sstr[index]);
	while (i == index || sstr[i])
	{
		sstr[i] = sstr[i + 1];
		++i;
	}
}
