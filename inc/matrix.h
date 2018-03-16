/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 15:36:03 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/16 18:04:26 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

# include <math.h>

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
** fuking norme.. need to do that for perspective parameter
*/

typedef	struct	s_perspective
{
	float	angle;
	float	ratio;
	float	near;
	float	far;
}				t_perspective;

/*
** todo : function with double precision !
*/

/*
** vector zone
*/

/*
** basique operation
*/

void	sum_vector2f(fvect2 a, fvect2 b);
void	sum_vector3f(fvect3 a, fvect3 b);
void	sum_vector4f(fvect4 a, fvect4 b);

void	sub_vector2f(fvect2 a, fvect2 b);
void	sub_vector3f(fvect3 a, fvect3 b);
void	sub_vector4f(fvect4 a, fvect4 b);

void	cpy_vector2f(fvect2 a, fvect2 b);
void	cpy_vector3f(fvect3 a, fvect3 b);
void	cpy_vector4f(fvect4 a, fvect4 b);


/*
** norme vector
*/

float	norme_vector4f(fvect4 a);
float	norme_vector3f(fvect3 a);
float	norme_vector2f(fvect2 a);


/*
** transform
*/

void	transform_vector2f(fmat2 matrix, fvect2 vect);
void	transform_vector3f(fmat3 matrix, fvect3 vect);
void	transform_vector4f(fmat4 matrix, fvect4 vect);

/*
** normalize vector
*/

void	normalize_vector4f(fvect4 vect);
void	normalize_vector3f(fvect3 vect);
void	normalize_vector2f(fvect2 vect);

/*
** cross vector
*/

void	cross_vector3f(fvect3 a, fvect3 b);

/*
** dot vector
*/

float	dot_vector3f(fvect3 a, fvect3 b);

/*
** matrix zone
*/

/*
** basic operation
*/



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

/*
** init matrix
*/

void	init_matrix4f(fmat3 matrix);
void	init_matrix3f(fmat3 matrix);
void	init_matrix2f(fmat2 matrix);

/*
** perspectie matrix for 3D with OpenGl
*/

void	perspective_matrix4f(fmat4 mat, t_perspective pers);

/*
** lookat_matrix for 3D with OpenGl
*/

void	lookat_matrix(fmat4 mat, fvect3 eye, fvect3 center, fvect3 up);

#endif
