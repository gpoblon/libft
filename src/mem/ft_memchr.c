/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 18:21:16 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:50:36 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		if (((t_uchar*)b)[i] == (t_uchar)c)
			return ((void*)((t_uchar*)(b + i)));
		i++;
	}
	return (NULL);
}
