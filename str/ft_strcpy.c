/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 18:20:34 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/23 16:51:13 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *strcpy(char *dest, const char *src)
{
	if (ft_strlen(*dest) > ft_strlen(*src))
		return (1);
	while (dest[i++])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
