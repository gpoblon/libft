/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:54:11 by gpoblon           #+#    #+#             */
/*   Updated: 2017/10/21 18:35:21 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sstrchr(char **map, char *str)
{
	int	i;

	i = -1;
	while (map[++i])
	{
		ft_printf("%i, %s, %s\n", ft_strcmp(map[i], str), map[i], str);
		if (!ft_strcmp(map[i], str))
			return (TRUE);
	}
	return (FALSE);
}
