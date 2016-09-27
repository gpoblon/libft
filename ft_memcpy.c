/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 20:25:37 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/27 18:06:26 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	if (!dst || !src)
		return (NULL);
	while (len--)
		((t_uchar*)dst)[len] = ((t_uchar*)src)[len];
	return(dst);
}
