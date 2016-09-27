/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 16:46:21 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/23 16:56:17 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	if (ft_strlen(*dest) > ft_strlen(*src))
		return (1);
	while (dest[i++] && i < n)
		dest[i] = src[i];
	if (ft_strlen(src) <= n)
		dest[i] = '\0';
	return (dest);
}
