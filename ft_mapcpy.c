/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 10:46:00 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 15:47:01 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_mapcpy(char **dst, const char **src)
{
	int y;
	int x;

	y = 0;
	while (src[y])
	{
		x = 0;
		while (src[y][x])
		{
			dst[y][x] = src[y][x];
			x++;
		}
		y++;
	}
}