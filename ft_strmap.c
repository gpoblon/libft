/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 19:19:03 by gpoblon           #+#    #+#             */
/*   Updated: 2016/10/01 22:16:21 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *new_s;
	size_t	i;

	i = 0;
	new_s = NULL;
	if (!s || !f)
		return (NULL);
	new_s = ft_strnew(ft_strlen(s) + 1);
	if (!new_s)
		return (NULL);
	while (s[i])
	{
		new_s[i] = f(s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
