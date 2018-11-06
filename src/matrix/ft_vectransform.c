/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectransform.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:12 by gpoblon           #+#    #+#             */
/*   Updated: 2018/11/06 13:45:36 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** transform :
** /------------\   /-\   /-------------------\
** | a  b  c  d |   |x|   | ax + by + cz + dw |
** | e  f  g  h |   |y|   | ex + fy + gz + hw |
** | i  j  k  l | x |z| = | ix + jy + kz + lw |
** | m  n  o  p |   |w|   | mx + ny + oz + pw |
** \------------/   \-/   \-------------------/
*/

void	ft_vec4transform(t_max4 max, t_vec4 *vec)
{
	vec->x = vec->x * max.x.x
			+ vec->y * max.x.y
			+ vec->z * max.x.z
			+ vec->w * max.x.w;
	vec->y = vec->x * max.y.x
			+ vec->y * max.y.y
			+ vec->z * max.y.z
			+ vec->w * max.y.w;
	vec->z = vec->x * max.z.x
			+ vec->y * max.z.y
			+ vec->z * max.z.z
			+ vec->w * max.z.w;
	vec->w = vec->x * max.w.x
			+ vec->y * max.w.y
			+ vec->z * max.w.z
			+ vec->w * max.w.w;
}

/*
** transform :
** /---------\   /-\   /--------------\
** | a  b  c |   |x|   | ax + by + cz |
** | d  e  f |   |y|   | dx + ey + fz |
** | g  h  i | x |z| = | gx + hy + iz |
** \---------/   \-/   \--------------/
*/

void	ft_vec3transform(t_max3 max, t_vec3 *vec)
{
	vec->x = vec->x * max.x.x
			+ vec->y * max.x.y
			+ vec->z * max.x.z;
	vec->y = vec->x * max.y.x
			+ vec->y * max.y.y
			+ vec->z * max.y.z;
	vec->z = vec->x * max.z.x
			+ vec->y * max.z.y
			+ vec->z * max.z.z;
}

/*
** transform :
** /------\   /-\   /---------\
** | a  b |   |x|   | ax + by |
** | c  d |   |y|   | cx + dy |
** \------/   \-/   \---------/
*/

void	ft_vec2transform(t_max2 max, t_vec2 *vec)
{
	vec->x = vec->x * max.x.x
			+ vec->y * max.x.y;
	vec->y = vec->x * max.y.x
			+ vec->y * max.y.y;
}
