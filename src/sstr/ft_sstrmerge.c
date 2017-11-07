/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrmerge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:49:22 by gwojda            #+#    #+#             */
/*   Updated: 2017/11/07 15:49:22 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_sstrmerge(char **s1, char **s2)
{
	char	**out;

	out = ft_sstrdup(s1);
	if (!s2)
		return (out);
	while (*s2)
	{
		out = ft_sstradd(out, *s2);
		s2++;
	}
	return (out);
}
