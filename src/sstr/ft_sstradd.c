/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstradd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:48:48 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 12:16:23 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

char	**ft_sstradd(char **sstr, char *new)
{
	int		size;
	char	**newlist;

	size = 0;
	if (sstr)
		while (sstr[size])
			size++;
	if (!(newlist = (char **)ft_memalloc(sizeof(char *) * (size + 2))))
		return (NULL);
	if (sstr)
		ft_memcpy(newlist, sstr, sizeof(char*) * size);
	newlist[size] = ft_strdup(new);
	newlist[size + 1] = NULL;
	free(sstr);
	return (newlist);
}
