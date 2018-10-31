/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:49:09 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 12:16:30 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sstr.h"

char	**ft_sstrdup(char **list)
{
	int		i;
	int		size;
	char	**cpy;

	i = 0;
	size = 0;
	while (list[size])
		size++;
	if (!(cpy = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	while (*list)
	{
		cpy[i++] = ft_strdup(*list);
		list++;
	}
	cpy[i] = NULL;
	return (cpy);
}
