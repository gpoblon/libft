/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 11:55:14 by gwojda            #+#    #+#             */
/*   Updated: 2018/11/06 13:38:58 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** init max to become :
** /----------------\
** | 1   0     0   0|
** | 0  cos  -sin  0|
** | 0  sin  cos   0|
** | 0   0    0    1|
** \----------------/
*/

void	ft_max4rotate_x(t_max4 *max, float angle)
{
	max->x.x = 1.0;
	max->x.y = 0.0;
	max->x.z = 0.0;
	max->x.w = 0.0;
	max->y.x = 0.0;
	max->y.y = cos(angle);
	max->y.z = -sin(angle);
	max->y.w = 0.0;
	max->z.x = 0.0;
	max->z.y = sin(angle);
	max->z.z = cos(angle);
	max->z.w = 0.0;
	max->w.x = 0.0;
	max->w.y = 0.0;
	max->w.z = 0.0;
	max->w.w = 1.0;
}

/*
** init max to become :
** /---------------\
** | cos  0  sin  0|
** | 0    1   0   0|
** | -sin 0  cos  0|
** | 0    0   0   1|
** \---------------/
*/

void	ft_max4rotate_y(t_max4 *max, float angle)
{
	max->x.x = cos(angle);
	max->x.y = 0.0;
	max->x.z = sin(angle);
	max->x.w = 0.0;
	max->y.x = 0.0;
	max->y.y = 1.0;
	max->y.z = 0.0;
	max->y.w = 0.0;
	max->z.x = -sin(angle);
	max->z.y = 0.0;
	max->z.z = cos(angle);
	max->z.w = 0.0;
	max->w.x = 0.0;
	max->w.y = 0.0;
	max->w.z = 0.0;
	max->w.w = 1.0;
}

/*
** init max to become :
** /-----------------\
** | cos -sin   0   0|
** | sin  cos   0   0|
** | 0     0    1   0|
** | 0     0    0   1|
** \-----------------/
*/

void	ft_max4rotate_z(t_max4 *max, float angle)
{
	max->x.x = cos(angle);
	max->x.y = -sin(angle);
	max->x.z = 0.0;
	max->x.w = 0.0;
	max->y.x = sin(angle);
	max->y.y = cos(angle);
	max->y.z = 0.0;
	max->y.w = 0.0;
	max->z.x = 0.0;
	max->z.y = 0.0;
	max->z.z = 1.0;
	max->z.w = 0.0;
	max->w.x = 0.0;
	max->w.y = 0.0;
	max->w.z = 0.0;
	max->w.w = 1.0;
}
