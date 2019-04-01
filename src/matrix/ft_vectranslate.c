/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectranslate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 17:26:37 by gwojda            #+#    #+#             */
/*   Updated: 2018/11/06 13:46:26 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** translate :
** /------------\
** | 1  0  0  X |
** | 0  1  0  Y |
** | 0  0  1  Z |
** | 0  0  0  1 |
** \------------/
*/

void	ft_vec4translate(t_max4 *max, t_vec3 vec)
{
	max->x.x = 1;
	max->x.y = 0;
	max->x.z = 0;
	max->x.w = vec.x;
	max->y.x = 0;
	max->y.y = 1;
	max->y.z = 0;
	max->y.w = vec.y;
	max->z.x = 0;
	max->z.y = 0;
	max->z.z = 1;
	max->z.w = vec.z;
	max->w.x = 0;
	max->w.y = 0;
	max->w.z = 0;
	max->w.w = 1;
}

/*
** transform :
** /---------\
** | 1  0  X |
** | 0  1  Y |
** | 0  0  1 |
** \---------/
*/

void	ft_vec3translate(t_max3 *max, t_vec3 vec)
{
	max->x.x = 1;
	max->x.y = 0;
	max->x.z = vec.x;
	max->y.x = 0;
	max->y.y = 1;
	max->y.z = vec.y;
	max->z.x = 0;
	max->z.y = 0;
	max->z.z = 1;
}
