/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 12:59:34 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 14:37:46 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdup(const char *s, char c)
{
	char	*s_dup;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] && s[i] != c)
		i++;
	s_dup = (char *)malloc(sizeof(char) * (i + 1));
	if (!s_dup)
		return (NULL);
	s_dup[i] = '\0';
	i--;
	while (i >= 0)
	{
		s_dup[i] = s[i];
		i--;
	}
	return (s_dup);
}
