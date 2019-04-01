/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:49:51 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 11:51:33 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sstr.h"

char		*ft_sstrstr(char **sstr, char *find)
{
	int		size;

	if (!sstr)
		return (NULL);
	size = ft_strlen(find);
	while ((*sstr))
	{
		if (ft_strncmp(*sstr, find, size) == 0)
			return (*sstr);
		sstr++;
	}
	return (NULL);
}
