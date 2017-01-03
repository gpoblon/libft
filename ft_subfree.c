/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 11:52:29 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/12 18:20:21 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_param(void *s, int free_param)
{
	if (free_param & NO_FREE)
		return ;
	if ((free_param & FREE_P1) || (free_param & FREE_ALL))
		free(s);
}

char		*ft_subfree(char const *s, unsigned int start, size_t len,
																int free_param)
{
	char	*new_s;
	size_t	i;

	new_s = NULL;
	i = 0;
	if (!s)
		return ((char *)NULL);
	new_s = ft_strnew(len);
	if (!new_s)
		return (NULL);
	while (i < len)
	{
		new_s[i] = s[i + start];
		i++;
	}
	new_s[i] = '\0';
	ft_free_param((void*)s, free_param);
	return (new_s);
}
