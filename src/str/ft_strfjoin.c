/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 18:00:26 by gpoblon           #+#    #+#             */
/*   Updated: 2017/11/07 16:28:53 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_params(void *s1, void *s2, int free_params)
{
	if (free_params & F_N)
		return ;
	if ((free_params & F_1) || (free_params & F_A))
		free(s1);
	if ((free_params & F_2) || (free_params & F_A))
		free(s2);
}

char		*ft_strfjoin(char const *s1, char const *s2, int free_params)
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
