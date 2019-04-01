/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_light.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 17:36:59 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 11:52:35 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

static char	*ft_strdupi(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!i)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str)
	{
		str[i--] = '\0';
		while (i >= 0)
		{
			str[i] = s[i];
			i--;
		}
	}
	return (str);
}

static int	ft_len_words(char const *s, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == c)
			len++;
		i++;
	}
	return (len + 1);
}

char		**ft_strsplit_light(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(s))
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_len_words(s, c) + 1));
	if (!(str))
		return (str);
	while (s[i])
	{
		if (!i)
			str[j] = ft_strdupi((s + i), c);
		if (s[i] == c && s[i + 1])
			str[j] = ft_strdupi((s + i + 1), c);
		if ((!i) || (s[i] == c && s[i + 1]))
			j++;
		i++;
	}
	str[j] = NULL;
	return (str);
}
