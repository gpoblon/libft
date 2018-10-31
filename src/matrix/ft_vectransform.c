/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectransform.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:12 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/30 15:41:02 by gpoblon          ###   ########.fr       */
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

void	ft_vec4transform(t_max4 max, t_vec4 vect)
{
	vect[0] = vect[0] * max[0]
			+ vect[1] * max[1]
			+ vect[2] * max[2]
			+ vect[3] * max[3];
	vect[1] = vect[0] * max[4]
			+ vect[1] * max[5]
			+ vect[2] * max[6]
			+ vect[3] * max[7];
	vect[2] = vect[0] * max[8]
			+ vect[1] * max[9]
			+ vect[2] * max[10]
			+ vect[3] * max[11];
	vect[3] = vect[0] * max[12]
			+ vect[1] * max[13]
			+ vect[2] * max[14]
			+ vect[3] * max[15];
}

/*
** transform :
** /---------\   /-\   /--------------\
** | a  b  c |   |x|   | ax + by + cz |
** | d  e  f |   |y|   | dx + ey + fz |
** | g  h  i | x |z| = | gx + hy + iz |
** \---------/   \-/   \--------------/
*/

void	ft_vec3transform(t_max3 max, t_vec3 vect)
{
	vect[0] = vect[0] * max[0]
			+ vect[1] * max[1]
			+ vect[2] * max[2];
	vect[1] = vect[0] * max[3]
			+ vect[1] * max[4]
			+ vect[2] * max[5];
	vect[2] = vect[0] * max[6]
			+ vect[1] * max[7]
			+ vect[2] * max[8];
}

/*
** transform :
** /------\   /-\   /---------\
** | a  b |   |x|   | ax + by |
** | c  d |   |y|   | cx + dy |
** \------/   \-/   \---------/
*/

void	ft_vec2transform(t_max2 max, t_vec2 vect)
{
	vect[0] = vect[0] * max[0]
			+ vect[1] * max[1];
	vect[1] = vect[0] * max[2]
			+ vect[1] * max[3];
}
