/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpy_matrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 12:37:45 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/18 12:01:10 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	cpy_matrix4f(fmat4 mat1, fmat4 mat2)
{
	mat1[0] = mat2[0];
	mat1[1] = mat2[1];
	mat1[2] = mat2[2];
	mat1[3] = mat2[3];
	mat1[4] = mat2[4];
	mat1[5] = mat2[5];
	mat1[6] = mat2[6];
	mat1[7] = mat2[7];
	mat1[8] = mat2[8];
	mat1[9] = mat2[9];
	mat1[10] = mat2[10];
	mat1[11] = mat2[11];
	mat1[12] = mat2[12];
	mat1[13] = mat2[13];
	mat1[14] = mat2[14];
	mat1[15] = mat2[15];
}

void	cpy_matrix3f(fmat3 mat1, fmat3 mat2)
{
	mat1[0] = mat2[0];
	mat1[1] = mat2[1];
	mat1[2] = mat2[2];
	mat1[3] = mat2[3];
	mat1[4] = mat2[4];
	mat1[5] = mat2[5];
	mat1[6] = mat2[6];
	mat1[7] = mat2[7];
	mat1[8] = mat2[8];
}

void	cpy_matrix2f(fmat2 mat1, fmat2 mat2)
{
	mat1[0] = mat2[0];
	mat1[1] = mat2[1];
	mat1[2] = mat2[2];
	mat1[3] = mat2[3];
}
