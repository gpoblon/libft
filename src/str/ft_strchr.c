/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 21:03:53 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 14:37:23 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (i == 0 || s[i - 1])
	{
		if (s[i] == (t_uchar)c)
			return ((char*)s + (char)i);
		i++;
	}
	return (NULL);
}
