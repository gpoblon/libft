/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lookat_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 14:04:39 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/19 11:10:13 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** fking norme
*/

/*
** xaxis.x       xaxis.y         xaxis.z      -dot(xaxis, eye)
** yaxis.x       yaxis.y         yaxis.z      -dot(yaxis, eye)
** zaxis.x       zaxis.y         zaxis.z       -dot(zaxis, eye)
** 0                 0                  0              1
*/

static void	set_mat(t_fmat4 mat, t_fvect3 x, t_fvect3 y, t_fvect3 z)
{
    mat[0] = x[0];
    mat[1] = x[1];
    mat[2] = x[2];
	mat[4] = y[0];
    mat[5] = y[1];
    mat[6] = y[2];
    mat[8] = z[0];
    mat[9] = z[1];
    mat[10] = z[2];
    mat[12] = 0;
    mat[13] = 0;
    mat[14] = 0;
    mat[15] = 1.0f;
}

void	lookat_matrix(t_fmat4 mat, t_fvect3 eye, t_fvect3 center, t_fvect3 up)
{
	t_fvect3	x;
	t_fvect3	y;
	t_fvect3	z;

	cpy_vector3f(z, eye);
	sub_vector3f(z, center);
	normalize_vector3f(z);
	cpy_vector3f(x, up);
	cross_vector3f(x, z);
	normalize_vector3f(x);
	cpy_vector3f(y, z);
	cross_vector3f(y, x);
	normalize_vector3f(y);
    mat[3] = -dot_vector3f(x, eye);
    mat[7] = -dot_vector3f(y, eye);
    mat[11] = -dot_vector3f(z, eye);
	set_mat(mat, x, y, z);
}
