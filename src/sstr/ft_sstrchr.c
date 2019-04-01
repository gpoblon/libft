/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:54:11 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 13:34:32 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sstr.h"
#include "ft_printf.h"

int	ft_sstrchr(char **map, char *str)
{
	int	i;

	i = -1;
	while (map[++i])
	{
		ft_printf("%i, %s, %s\n", ft_strcmp(map[i], str), map[i], str);
		if (!ft_strcmp(map[i], str))
			return (1);
	}
	return (0);
}
