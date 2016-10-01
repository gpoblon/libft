/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 23:31:02 by gpoblon           #+#    #+#             */
/*   Updated: 2016/10/01 16:16:47 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	size_t tmp_i;

	i = 0;
	j = 0;
	while (i == 0 || (s1[i - 1] && i < n))
	{
		tmp_i = i;
		while (s1[i] == s2[j])
		{
			i++;
			j++;
			if (s2[j] == s2[ft_strlen(s2)])
				return((char*)s1 + (char)tmp_i);
		}
		i = tmp_i + 1;
		j = 0;
	}
	return (NULL);
}
