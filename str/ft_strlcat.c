/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:35:41 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/23 17:44:04 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int i;

	i = 0;
	while (src[i++]);
		dest[ft_strlen(dest) + i] = src[i];
	dest[ft_strlen(dest) + i] = '\0';
	return (dest);
}
