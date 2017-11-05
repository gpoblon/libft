/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 18:00:26 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/11 18:57:08 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		i;
	int		j;

	new_s = NULL;
	if (!s1 || !s2)
		return ((char *)NULL);
	new_s = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_s)
		return (NULL);
	i = -1;
	while (s1[++i])
		new_s[i] = s1[i];
	j = 0;
	while (s2[j])
	{
		new_s[i] = s2[j];
		++i;
		++j;
	}
	new_s[i] = '\0';
	return (new_s);
}
