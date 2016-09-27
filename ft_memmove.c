/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 22:28:17 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/27 22:39:31 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	t_uchar	tmp[len];

	i = 0;
	while (i < len)
	{
		((t_uchar*)tmp)[i] = ((t_uchar*)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((t_uchar*)dst)[i] = ((t_uchar*)tmp)[i];
		i++;
	}
	return (dst);
}
