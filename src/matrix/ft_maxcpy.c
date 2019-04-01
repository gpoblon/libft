/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 12:37:45 by gwojda            #+#    #+#             */
/*   Updated: 2018/11/06 13:47:35 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_max4cpy(t_max4 *max1, t_max4 max2)
{
	max1->x.x = max2.x.x;
	max1->x.y = max2.x.y;
	max1->x.z = max2.x.z;
	max1->x.w = max2.x.w;
	max1->y.x = max2.y.x;
	max1->y.y = max2.y.y;
	max1->y.z = max2.y.z;
	max1->y.w = max2.y.w;
	max1->z.x = max2.z.x;
	max1->z.y = max2.z.y;
	max1->z.z = max2.z.z;
	max1->z.w = max2.z.w;
	max1->w.x = max2.w.x;
	max1->w.y = max2.w.y;
	max1->w.z = max2.w.z;
	max1->w.w = max2.w.w;
}

void	ft_max3cpy(t_max3 *max1, t_max3 max2)
{
	max1->x.x = max2.x.x;
	max1->x.y = max2.x.y;
	max1->x.z = max2.x.z;
	max1->y.x = max2.y.x;
	max1->y.y = max2.y.y;
	max1->y.z = max2.y.z;
	max1->z.x = max2.z.x;
	max1->z.y = max2.z.y;
	max1->z.z = max2.z.z;
}

void	ft_max2cpy(t_max2 *max1, t_max2 max2)
{
	max1->x.x = max2.x.x;
	max1->x.y = max2.x.y;
	max1->y.x = max2.y.x;
	max1->y.y = max2.y.y;
}
