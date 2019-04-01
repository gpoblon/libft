/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstradd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 13:56:43 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 12:16:20 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sstr.h"

char	**ft_sstradd_front(char **sstr, char *new)
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
		newlist[0] = ft_strdup(new);
	ft_memcpy(newlist + 1, sstr, sizeof(char*) * size);
	newlist[size + 1] = NULL;
	free(sstr);
	return (newlist);
}
