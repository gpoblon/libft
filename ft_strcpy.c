/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 18:20:34 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/27 17:09:40 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strcpy(char *dest, const char *src)
{
	size_t i;

	i = 0;
	while (dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
