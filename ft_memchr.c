/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 18:21:16 by gpoblon           #+#    #+#             */
/*   Updated: 2016/10/02 12:16:22 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	if (!b)
		return (NULL);
	while (i < len)
	{
		if (((t_uchar*)b)[i] == (t_uchar)c)
			return ((void*)((t_uchar*)(b + i)));
		i++;
	}
	return (NULL);
}
