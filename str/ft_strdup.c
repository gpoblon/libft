/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 18:14:49 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/27 12:14:49 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	char *s_dup;
	size_t i;

	s_dup = ((char*)malloc(sizeof(char) * ft_strlen(*s) + 1);
	if (*s_dup == NULL || *s == '\0')
		return (1);
	while (s[i++])
	{
		s_dup[i] = s[i];
	}
	s_dup[i] = '\0';
	free(s_dup);
	return (*s_dup);
}
