/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_joinfree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 18:00:26 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/12 18:19:21 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_params(void *s1, void *s2, int free_params)
{
	if (free_params & NO_FREE)
		return ;
	if ((free_params & FREE_P1) || (free_params & FREE_ALL))
		free(s1);
	if ((free_params & FREE_P2) || (free_params & FREE_ALL))
		free(s2);
}

char		*ft_joinfree(char const *s1, char const *s2, int free_params)
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
	ft_free_params((void*)s1, (void*)s2, free_params);
	return (new_s);
}
