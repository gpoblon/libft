/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_whitespaces.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 17:46:21 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 11:52:35 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char		*ft_strdupi_w(char const *s)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != ' ' && s[i] != '\t')
		i++;
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

static int	ft_len_words(char const *s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != ' ' && s[i] != '\t') || ((s[i] != ' '
		&& s[i] != '\t') && (s[i - 1] == ' ' || s[i - 1] == '\t')))
			len++;
		i++;
	}
	return (len);
}

char		**ft_split_whitespaces(char const *s)
{
	int		i;
	char	**str;
	int		j;

	str = NULL;
	if (!(s))
		return (str);
	str = (char **)malloc(sizeof(char *) * (ft_len_words(s) + 1));
	i = 0;
	j = 0;
	if (!(str))
		return (str);
	while (s[i])
	{
		if ((i == 0 && s[i] != ' ' && s[i] != '\t') || ((s[i] != ' '
		&& s[i] != '\t') && (s[i - 1] == ' ' || s[i - 1] == '\t')))
		{
			str[j] = ft_strdupi_w((s + i));
			j++;
		}
		i++;
	}
	str[j] = NULL;
	return (str);
}
