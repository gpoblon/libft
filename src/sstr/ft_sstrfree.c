/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrfree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:49:13 by gwojda            #+#    #+#             */
/*   Updated: 2017/11/07 15:49:16 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sstrfree(char **sstr)
{
	int		i;

	i = 0;
	if (sstr)
	{
		while (sstr[i])
		{
			ft_strdel(sstr + i);
			i++;
		}
		ft_strdel(sstr + i);
		free(sstr);
	}
}
