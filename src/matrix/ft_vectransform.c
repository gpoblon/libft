/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectransform.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:12 by gpoblon           #+#    #+#             */
/*   Updated: 2018/11/02 16:09:01 by gpoblon          ###   ########.fr       */
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
	vec->x = vec->x * max[0]
			+ vec->y * max[1]
			+ vec->z * max[2]
			+ vec->w * max[3];
	vec->y = vec->x * max[4]
			+ vec->y * max[5]
			+ vec->z * max[6]
			+ vec->w * max[7];
	vec->z = vec->x * max[8]
			+ vec->y * max[9]
			+ vec->z * max[10]
			+ vec->w * max[11];
	vec->w = vec->x * max[12]
			+ vec->y * max[13]
			+ vec->z * max[14]
			+ vec->w * max[15];
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
	vec->x = vec->x * max[0]
			+ vec->y * max[1]
			+ vec->z * max[2];
	vec->y = vec->x * max[3]
			+ vec->y * max[4]
			+ vec->z * max[5];
	vec->z = vec->x * max[6]
			+ vec->y * max[7]
			+ vec->z * max[8];
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
	vec->x = vec->x * max[0]
			+ vec->y * max[1];
	vec->y = vec->x * max[2]
			+ vec->y * max[3];
}
