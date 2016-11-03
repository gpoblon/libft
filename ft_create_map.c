/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 10:21:41 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 14:57:25 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_create_map(char **map, int size_x, int size_y, char c)
{
	int x;
	int y;

	y = 0;
	while (y < size_y)
	{
		x = 0;
		map[y] = (char *)malloc(sizeof(char) * (size_x + 1));
		CHECKPV0(map[y]);
		while (x < size_x)
		{
			map[y][x] = c;
			x++;
		}
		map[y][x] = '\0';
		y++;
	}
	map[y] = NULL;
	return (map);
}
