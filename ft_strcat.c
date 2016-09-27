/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 16:56:52 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/27 17:09:32 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strcat(char *dest, const char *src)
{
	size_t i;

	i = 0;
	while (src[i]);
	{
		dest[ft_strlen(dest) + i] = src[i];
		i++;
	}
	dest[ft_strlen(dest) + i] = '\0';
	return (dest);
}
