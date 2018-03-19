/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 11:55:14 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/18 14:40:49 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** init matrix to become :
** /----------------\
** | 1   0     0   0|
** | 0  cos  -sin  0|
** | 0  sin  cos   0|
** | 0   0    0    1|
** \----------------/
*/

void	rotatex_mat4f(fmat4 mat, float angle)
{
	mat[0] = 1.0;
	mat[1] = 0.0;
	mat[2] = 0.0;
	mat[3] = 0.0;
	mat[4] = 0.0;
	mat[5] = cos(angle);
	mat[6] = -sin(angle);
	mat[7] = 0.0;
	mat[8] = 0.0;
	mat[9] = sin(angle);
	mat[10] = cos(angle);
	mat[11] = 0.0;
	mat[12] = 0.0;
	mat[13] = 0.0;
	mat[14] = 0.0;
	mat[15] = 1.0;
}

/*
** init matrix to become :
** /---------------\
** | cos  0  sin  0|
** | 0    1   0   0|
** | -sin 0  cos  0|
** | 0    0   0   1|
** \---------------/
*/

void	rotatey_mat4f(fmat4 mat, float angle)
{
	mat[0] = cos(angle);
	mat[1] = 0.0;
	mat[2] = sin(angle);
	mat[3] = 0.0;
	mat[4] = 0.0;
	mat[5] = 1.0;
	mat[6] = 0.0;
	mat[7] = 0.0;
	mat[8] = -sin(angle);
	mat[9] = 0.0;
	mat[10] = cos(angle);
	mat[11] = 0.0;
	mat[12] = 0.0;
	mat[13] = 0.0;
	mat[14] = 0.0;
	mat[15] = 1.0;
}

/*
** init matrix to become :
** /-----------------\
** | cos -sin   0   0|
** | sin  cos   0   0|
** | 0     0    1   0|
** | 0     0    0   1|
** \-----------------/
*/

void	rotatez_mat4f(fmat4 mat, float angle)
{
	mat[0] = cos(angle);
	mat[1] = -sin(angle);
	mat[2] = 0.0;
	mat[3] = 0.0;
	mat[4] = sin(angle);
	mat[5] = cos(angle);
	mat[6] = 0.0;
	mat[7] = 0.0;
	mat[8] = 0.0;
	mat[9] = 0.0;
	mat[10] = 1.0;
	mat[11] = 0.0;
	mat[12] = 0.0;
	mat[13] = 0.0;
	mat[14] = 0.0;
	mat[15] = 1.0;
}
