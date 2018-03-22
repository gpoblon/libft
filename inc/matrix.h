/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 15:36:03 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/19 13:31:08 by gwojda           ###   ########.fr       */
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

typedef float	t_fmat4[16];
typedef float	t_fmat3[9];
typedef float	t_fmat2[4];

typedef float	t_fvect4[4];
typedef float	t_fvect3[3];
typedef float	t_fvect2[2];

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

void	sum_vector2f(t_fvect2 a, t_fvect2 b);
void	sum_vector3f(t_fvect3 a, t_fvect3 b);
void	sum_vector4f(t_fvect4 a, t_fvect4 b);

void	sub_vector2f(t_fvect2 a, t_fvect2 b);
void	sub_vector3f(t_fvect3 a, t_fvect3 b);
void	sub_vector4f(t_fvect4 a, t_fvect4 b);

void	cpy_vector2f(t_fvect2 a, t_fvect2 b);
void	cpy_vector3f(t_fvect3 a, t_fvect3 b);
void	cpy_vector4f(t_fvect4 a, t_fvect4 b);

void	vector_mult4ff(t_fvect4 vect, float mult);
void	vector_mult3ff(t_fvect4 vect, float mult);
void	vector_mult2ff(t_fvect4 vect, float mult);

/*
** norme vector
*/

float	norme_vector4f(t_fvect4 a);
float	norme_vector3f(t_fvect3 a);
float	norme_vector2f(t_fvect2 a);


/*
** transform
*/

void	transform_vector2f(t_fmat2 matrix, t_fvect2 vect);
void	transform_vector3f(t_fmat3 matrix, t_fvect3 vect);
void	transform_vector4f(t_fmat4 matrix, t_fvect4 vect);

/*
** normalize vector
*/

void	normalize_vector4f(t_fvect4 vect);
void	normalize_vector3f(t_fvect3 vect);
void	normalize_vector2f(t_fvect2 vect);

/*
** cross vector
*/

void	cross_vector3f(t_fvect3 a, t_fvect3 b);

/*
** dot vector
*/

float	dot_vector3f(t_fvect3 a, t_fvect3 b);

/*
** matrix zone
*/

/*
** basic operation
*/

void	mult_matrix4f(t_fmat4 m, t_fmat4 n);
void	mult_matrix3f(t_fmat3 mat1, t_fmat3 mat2);

void	cpy_matrix4f(t_fmat4 mat1, t_fmat4 mat2);
void	cpy_matrix3f(t_fmat3 mat1, t_fmat3 mat2);
void	cpy_matrix2f(t_fmat2 mat1, t_fmat2 mat2);

/*
** identity matrix init
*/

void	identity_matrix4f(t_fmat3 matrix);
void	identity_matrix3f(t_fmat3 matrix);
void	identity_matrix2f(t_fmat2 matrix);

/*
** translate matrix
*/

void	translate_vector4f(t_fmat4 matrix, t_fvect3 vect);
void	translate_vector3f(t_fmat3 matrix, t_fvect3 vect);

/*
** init matrix
*/

void	init_matrix4f(t_fmat3 matrix);
void	init_matrix3f(t_fmat3 matrix);
void	init_matrix2f(t_fmat2 matrix);

/*
** perspectie matrix for 3D with OpenGl
*/

void	perspective_matrix4f(t_fmat4 mat, t_perspective pers);

/*
** lookat_matrix for 3D with OpenGl
*/

void	lookat_matrix(t_fmat4 mat, t_fvect3 eye, t_fvect3 center, t_fvect3 up);

/*
** rotate matrix
*/

void	rotatex_mat4f(t_fmat4 mat, float angle);
void	rotatey_mat4f(t_fmat4 mat, float angle);
void	rotatez_mat4f(t_fmat4 mat, float angle);

#endif
