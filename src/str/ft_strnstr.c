/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 23:31:02 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:52:35 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*big && ft_strlen(little) == 0)
		return ((char *)big);
	if (len < ft_strlen(little))
		return (NULL);
	while (big[i])
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j]
				&& i + j < len)
			j++;
		if (little[j] == '\0' || j == len)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
