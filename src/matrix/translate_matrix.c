/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 17:26:37 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/15 17:41:47 by gwojda           ###   ########.fr       */
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

void	translate_vector4f(fmat4 matrix, fvect3 vect)
{
	matrix[0] = 1;
	matrix[1] = 0;
	matrix[2] = 0;
	matrix[3] = vect[0];
	matrix[4] = 0;
	matrix[5] = 1;
	matrix[6] = 0;
	matrix[7] = vect[1];
	matrix[8] = 0;
	matrix[9] = 0;
	matrix[10] = 1;
	matrix[11] = vect[2];
	matrix[12] = 0;
	matrix[13] = 0;
	matrix[14] = 0;
	matrix[15] = 1;
}

/*
** transform :
** /---------\
** | 1  0  X |
** | 0  1  Y |
** | 0  0  1 |
** \---------/
*/

void	translate_vector3f(fmat3 matrix, fvect3 vect)
{
	matrix[0] = 1;
	matrix[1] = 0;
	matrix[2] = vect[0];
	matrix[3] = 0;
	matrix[4] = 1;
	matrix[5] = vect[1];
	matrix[6] = 0;
	matrix[7] = 0;
	matrix[8] = 1;
}
