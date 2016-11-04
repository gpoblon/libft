/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 18:01:30 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/04 16:17:40 by gpoblon          ###   ########.fr       */
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
	while (s[i] && ft_iswhitespace(s[i]))
		i++;
	start = i;
	end = 0;
	while (s[i])
	{
		if (!ft_iswhitespace(s[i]))
			end = i;
		i++;
	}
	new_s = ft_strnew(start == ft_strlen(s) ? 0 : end - start + 1);
	CHECKPVN(new_s);
	if (new_s && start != ft_strlen(s))
		new_s = ft_strncpy(new_s, (s + start), end - start + 1);
	new_s[ft_strlen(new_s)] = '\0';
	return (new_s);
}
