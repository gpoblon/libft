/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:35:41 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/27 17:09:53 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size < ft_strlen(dest))
		return (size + ft_strlen(src));
	while (src[i] && i < (size - ft_strlen(dest) - 1))
	{
		dest[ft_strlen(dest) + i] = src[i];
		i++;
	}
	dest[ft_strlen(dest) + i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
