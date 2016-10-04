/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 18:01:30 by gpoblon           #+#    #+#             */
/*   Updated: 2016/10/04 17:24:31 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*new_s;

	if (!s)
		return (NULL);
	i = 0;
	new_s = NULL;
	while (s[i] && ft_iswhitespace(s[i]))
		i++;
	start = i;
	while (s[i])
	{
		if (!ft_iswhitespace(s[i]))
			end = i;
		i++;
	}
	new_s = ft_strnew(end - start + 2);
	if (new_s)
		new_s = ft_strncpy(new_s, (s + start), end - start + 1);
	return (new_s);
}
