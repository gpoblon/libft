/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 11:52:29 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:52:35 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;

	new_s = NULL;
	i = 0;
	if (!s)
		return ((char*)NULL);
	new_s = ft_strnew(len);
	if (!new_s)
		return (NULL);
	while (i < len)
	{
		new_s[i] = s[i + start];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
