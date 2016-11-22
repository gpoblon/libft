/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 18:01:42 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/22 23:54:33 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordsnb(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**char_tab;

	i = 0;
	j = 0;
	char_tab = NULL;
	if (!s)
		return (NULL);
	char_tab = (char**)malloc(sizeof(char *) * ft_wordsnb(s, c) + 1);
	if (!char_tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			char_tab[j] = ft_strcdup((s + i), c);
			j++;
		}
		i++;
	}
	char_tab[j] = NULL;
	return (char_tab);
}
