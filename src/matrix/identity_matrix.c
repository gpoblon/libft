/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identity_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 16:00:13 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/16 12:35:00 by mlaroche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** init matrix to become :
** /------------\
** | 1  0  0  0 |
** | 0  1  0  0 |
** | 0  0  1  0 |
** | 0  0  0  1 |
** \------------/
*/

void	identity_matrix4f(t_fmat4 matrix)
{
	matrix[0] = 1.0;
	matrix[1] = 0.0;
	matrix[2] = 0.0;
	matrix[3] = 0.0;
	matrix[4] = 0.0;
	matrix[5] = 1.0;
	matrix[6] = 0.0;
	matrix[7] = 0.0;
	matrix[8] = 0.0;
	matrix[9] = 0.0;
	matrix[10] = 1.0;
	matrix[11] = 0.0;
	matrix[12] = 0.0;
	matrix[13] = 0.0;
	matrix[14] = 0.0;
	matrix[15] = 1.0;
}

/*
** init matrix to become :
** /---------\
** | 1  0  0 |
** | 0  1  0 |
** | 0  0  1 |
** \---------/
*/


void	identity_matrix3f(t_fmat3 matrix)
{
	matrix[0] = 1.0;
	matrix[1] = 0.0;
	matrix[2] = 0.0;
	matrix[3] = 0.0;
	matrix[4] = 1.0;
	matrix[5] = 0.0;
	matrix[6] = 0.0;
	matrix[7] = 0.0;
	matrix[8] = 1.0;
}

/*
** init matrix to become :
** /------\
** | 1  0 |
** | 0  1 |
** \------/
*/


void	identity_matrix2f(t_fmat2 matrix)
{
	matrix[0] = 1.0;
	matrix[1] = 0.0;
	matrix[2] = 0.0;
	matrix[3] = 1.0;
}
