/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 20:25:37 by gpoblon           #+#    #+#             */
/*   Updated: 2019/04/08 16:56:37 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*str_dst;
	char	*str_src;
	size_t	count;

	str_dst = (char *)dst;
	str_src = (char *)src;
	count = 0;
	while (count < len)
	{
		str_dst[count] = str_src[count];
		count++;
	}
	return (dst);
}
