/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 20:38:54 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/23 18:08:21 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	while (len-- != 0 || !dst || !src)
	{
		((t_uchar*)dst)[len] = ((t_uchar*)src)[len];
		if (dst[len] == c || src[len] == c)
			return(dst[len + 1);
	}
	return(NULL);
}
