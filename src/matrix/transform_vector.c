/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_vector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 15:35:53 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/15 17:13:26 by gwojda           ###   ########.fr       */
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

void	transform_vector4f(fmat4 matrix, fvect4 vect)
{
	vect[0] = vect[0] * matrix[0]
			+ vect[1] * matrix[1]
			+ vect[2] * matrix[2]
			+ vect[3] * matrix[3];
	vect[1] = vect[0] * matrix[4]
			+ vect[1] * matrix[5]
			+ vect[2] * matrix[6]
			+ vect[3] * matrix[7];
	vect[2] = vect[0] * matrix[8]
			+ vect[1] * matrix[9]
			+ vect[2] * matrix[10]
			+ vect[3] * matrix[11];
	vect[3] = vect[0] * matrix[12]
			+ vect[1] * matrix[13]
			+ vect[2] * matrix[14]
			+ vect[3] * matrix[15];
}

/*
** transform :
** /---------\   /-\   /--------------\
** | a  b  c |   |x|   | ax + by + cz |
** | d  e  f |   |y|   | dx + ey + fz |
** | g  h  i | x |z| = | gx + hy + iz |
** \---------/   \-/   \--------------/
*/

void	transform_vector3f(fmat3 matrix, fvect3 vect)
{
	vect[0] = vect[0] * matrix[0]
			+ vect[1] * matrix[1]
			+ vect[2] * matrix[2];
	vect[1] = vect[0] * matrix[3]
			+ vect[1] * matrix[4]
			+ vect[2] * matrix[5];
	vect[2] = vect[0] * matrix[6]
			+ vect[1] * matrix[7]
			+ vect[2] * matrix[8];
}

/*
** transform :
** /------\   /-\   /---------\
** | a  b |   |x|   | ax + by |
** | c  d |   |y|   | cx + dy |
** \------/   \-/   \---------/
*/

void	transform_vector2f(fmat2 matrix, fvect2 vect)
{
	vect[0] = vect[0] * matrix[0]
			+ vect[1] * matrix[1];
	vect[1] = vect[0] * matrix[2]
			+ vect[1] * matrix[3];
}
