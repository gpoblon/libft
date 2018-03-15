/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 15:36:03 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/15 17:41:46 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

typedef double	dmat4[16];
typedef double	dmat3[9];
typedef double	dmat2[4];

typedef double	dvect4[4];
typedef double	dvect3[3];
typedef double	dvect2[2];

typedef float	fmat4[16];
typedef float	fmat3[9];
typedef float	fmat2[4];

typedef float	fvect4[4];
typedef float	fvect3[3];
typedef float	fvect2[2];

/*
** transform
*/

void	transform_vector2f(fmat2 matrix, fvect2 vect);
void	transform_vector3f(fmat3 matrix, fvect3 vect);
void	transform_vector4f(fmat4 matrix, fvect4 vect);

//todo : with double precision !

/*
** identity matrix init
*/

void	indentity_matrix4f(fmat3 matrix);
void	indentity_matrix3f(fmat3 matrix);
void	indentity_matrix2f(fmat2 matrix);

/*
** translate matrix
*/

void	translate_vector4f(fmat4 matrix, fvect3 vect);
void	translate_vector3f(fmat3 matrix, fvect3 vect);

#endif
