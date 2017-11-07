/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:49:09 by gwojda            #+#    #+#             */
/*   Updated: 2017/11/07 15:51:20 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
