/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:49:44 by gwojda            #+#    #+#             */
/*   Updated: 2017/11/07 15:49:46 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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