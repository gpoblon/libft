/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:49:44 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 11:51:32 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sstr.h"

void	ft_sstrsort(char **list, int (*cmp)())
{
	int		i;
	char	*tmp;

	i = 0;
	while (list[i] && list[i + 1])
	{
		if ((*cmp)(list[i], list[i + 1]) > 0)
		{
			tmp = list[i];
			list[i] = list[i + 1];
			list[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
