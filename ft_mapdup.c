/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 10:56:47 by gpoblon           #+#    #+#             */
/*   Updated: 2016/10/13 11:36:04 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_mapdup(char **map)
{
	int		y;
	int		x;
	size_t	len_x;
	char	**new_map;


	y = 0;
	x = 0;
	new_map = NULL;
	while (map[y][x])
	{
		++len_x;
		++x;
	}
	while (map[y])
	{
		x = 0;
		new_map[y] = (char *)malloc(sizeof(char) * (x + 1));
		CHECKPV0(map[y])
		while (map[y][x])
		{
			new_map[y][x] = map[y][x];
			x++;
		}
		map[y][x] = '\0';
		y++;
	}
	map[y] = NULL;
	return (map);
}
