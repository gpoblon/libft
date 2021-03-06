/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 20:38:54 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:50:36 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && ((t_uchar*)src)[i] != (t_uchar)c)
	{
		((t_uchar*)dst)[i] = ((t_uchar*)src)[i];
		i++;
	}
	if (i == len)
		return (NULL);
	((t_uchar*)dst)[i] = ((t_uchar*)src)[i];
	return (dst + i + 1);
}
