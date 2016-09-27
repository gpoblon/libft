/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:32:39 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/23 17:43:00 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *strncat(char *dest, const char *src, size_t n)
{
	int i;

	i = 0;
	while (src[i++] && i < n);
		dest[ft_strlen(dest) + i] = src[i];
	dest[ft_strlen(dest) + i] = '\0';
	return (dest);
}
