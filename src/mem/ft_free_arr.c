/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 10:38:21 by gpoblon           #+#    #+#             */
/*   Updated: 2019/04/03 11:52:28 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	ft_free_arr(void **map, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		free(map[i]);
		++i;
	}
	free(map);
}
