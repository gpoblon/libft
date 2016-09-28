/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:32:39 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/28 22:26:28 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strncat(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] && i < n);
	{
		dst[ft_strlen(dst) + i] = src[i];
		i++;
	}
	dst[ft_strlen(dst) + i] = '\0';
	return (dst);
}
