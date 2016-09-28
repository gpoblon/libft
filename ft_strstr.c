/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 22:27:54 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/28 22:51:35 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t i;
	size_t j;
	size_t tmp_i;

	i = 0;
	j = 0;
	tmp_i = 0;
	while (i == 0 || s1[i - 1])
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
