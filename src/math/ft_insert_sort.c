/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:27:34 by gpoblon           #+#    #+#             */
/*   Updated: 2019/04/08 17:17:51 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"


static void	swap_addr(void *pta, void *ptb, unsigned int size)
{
	char	tmp[size];

	ft_memcpy(tmp, pta, size);
	ft_memcpy(pta, ptb, size);
	ft_memcpy(ptb, tmp, size);
}

void		ft_insert_sort(void *arr, unsigned int size,
	unsigned int len, int (*cmp)())
{
	unsigned int	i;

	i = 0;
	while (i < (len - 1) * size)
	{
		if ((*cmp)((char*)(arr + i), (char*)(arr + i + size)) > 0)
		{
			swap_addr((char*)(arr + i), (char*)(arr + i + size), size);
			i = 0;
		}
		else
			i += size;
	}
}
