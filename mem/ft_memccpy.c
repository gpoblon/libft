/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 20:38:54 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/27 12:30:39 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t i;

	i = 0;
	while (((t_uchar*)src)[i] != (t_uchar)c && i < len)
	{
		((t_uchar*)dst)[i] = ((t_uchar*)src)[i];
		i++;
	}
	if (i == len)
		return (NULL);
	((t_uchar*)dst)[i] = ((t_uchar)src)[i];
	return(dst[i + 1]);
}
