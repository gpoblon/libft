/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:35:41 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/28 22:26:04 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size < ft_strlen(dst))
		return (size + ft_strlen(src));
	while (src[i] && i < (size - ft_strlen(dst) - 1))
	{
		dst[ft_strlen(dst) + i] = src[i];
		i++;
	}
	dst[ft_strlen(dst) + i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
