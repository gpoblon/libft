/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lookat_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 14:04:39 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/16 15:32:54 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** fking norme
*/

static void	set_mat(fmat4 mat, fvect3 x, fvect3 y, fvect3 z)
{
    mat[0] = x[0];
    mat[4] = x[1];
    mat[8] = x[2];
	mat[1] = y[0];
    mat[5] = y[1];
    mat[9] = y[2];
    mat[2] = z[0];
    mat[6] = z[1];
    mat[10] = z[2];
    mat[3] = 0;
    mat[7] = 0;
    mat[11] = 0;
    mat[15] = 1.0f;
}

void	lookat_matrix(fmat4 mat, fvect3 eye, fvect3 center, fvect3 up)
{
    fvect3	x;
	fvect3	y;
	fvect3	z;

	cpy_vector3f(z, eye);
	sub_vector3f(z, center);
	normalize_vector3f(z);
	cpy_vector3f(y, up);
	cpy_vector3f(x, y);
	cross_vector3f(x, z);
	cpy_vector3f(y, z);
	cross_vector3f(y, x);
	normalize_vector3f(x);
	normalize_vector3f(y);
    mat[12] = -dot_vector3f(x, eye);
    mat[13] = -dot_vector3f(y, eye);
    mat[14] = -dot_vector3f(z, eye);
	set_mat(mat, x, y, z);
}
