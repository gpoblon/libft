/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 18:01:42 by gpoblon           #+#    #+#             */
/*   Updated: 2016/10/04 18:51:38 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordslen (char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			len++;
		i++;
	}
	return (len + 1);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**char_tab;

	i = 0;
	j = 0;
	char_tab = NULL;
	if (!s)
		return (NULL);
	char_tab = (char **)malloc(sizeof(char *) * ft_wordslen(s, c) + 1);
	if (!char_tab)
		return (NULL);
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
		{
			char_tab[j] = ft_strcdup((s + i), c);
			j++;
		}
		i++;
	}
	char_tab[j] = '\0';
	return (char_tab);
}
