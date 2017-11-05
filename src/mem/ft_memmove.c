/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 22:28:17 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 19:33:35 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (len == 0)
		return (dst);
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	len--;
	while (len > 0)
	{
		((char *)dst)[len] = ((char *)src)[len];
		len--;
	}
	((char *)dst)[len] = ((char *)src)[len];
	return (dst);
}
