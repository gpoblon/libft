/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 16:56:52 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/28 22:26:15 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strcat(char *dst, const char *src)
{
	size_t i;

	i = 0;
	while (src[i]);
	{
		dst[ft_strlen(dst) + i] = src[i];
		i++;
	}
	dst[ft_strlen(dst) + i] = '\0';
	return (dst);
}
