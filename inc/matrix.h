/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 15:36:03 by gwojda            #+#    #+#             */
/*   Updated: 2018/11/09 16:57:04 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef matrix_H
# define matrix_H

# include <math.h>

# define PI 3.141592

typedef struct	s_vector_4d
{
	double		x;
	double		y;
	double		z;
	double		w;
}				t_vec4d;

typedef struct	s_vector_3d
{
	double		x;
	double		y;
	double		z;
}				t_vec3d;

typedef struct	s_vector_2d
{
	double		x;
	double		y;
}				t_vec2d;

typedef struct	s_vector_4
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_vec4;

typedef struct	s_vector_3
{
	float		x;
	float		y;
	float		z;
}				t_vec3;

typedef struct	s_vector_2
{
	float		x;
	float		y;
}				t_vec2;

typedef struct	s_matrix_4
{
	t_vec4		x;
	t_vec4		y;
	t_vec4		z;
	t_vec4		w;
}				t_max4;

typedef struct	s_matrix_3
{
	t_vec3		x;
	t_vec3		y;
	t_vec3		z;
}				t_max3;

typedef struct	s_matrix_2
{
	t_vec2		x;
	t_vec2		y;
}				t_max2;

typedef struct	s_matrix_4d
{
	t_vec4d		x;
	t_vec4d		y;
	t_vec4d		z;
	t_vec4d		w;
}				t_max4d;

typedef struct	s_matrix_3d
{
	t_vec3d		x;
	t_vec3d		y;
	t_vec3d		z;
}				t_max3d;

typedef struct	s_matrix_2d
{
	t_vec2d		x;
	t_vec2d		y;
}				t_max2d;

typedef	struct	s_perspective
{
	float	angle;
	float	ratio;
	float	near;
	float	far;
}				t_perspective;

/*
** VECTORS
*/

/*
** basic operations
*/

void			ft_vec2sum(t_vec2 *ret, t_vec2 a, t_vec2 b);
void			ft_vec3sum(t_vec3 *ret, t_vec3 a, t_vec3 b);
void			ft_vec4sum(t_vec4 *ret, t_vec4 a, t_vec4 b);

void			ft_vec2sub(t_vec2 *ret, t_vec2 a, t_vec2 b);
void			ft_vec3sub(t_vec3 *ret, t_vec3 a, t_vec3 b);
void			ft_vec4sub(t_vec4 *ret, t_vec4 a, t_vec4 b);

void			ft_vec2cpy(t_vec2 *a, t_vec2 b);
void			ft_vec3cpy(t_vec3 *a, t_vec3 b);
void			ft_vec4cpy(t_vec4 *a, t_vec4 b);

void			ft_vec2scale(t_vec2 *ret, t_vec2 vec, float mult);
void			ft_vec3scale(t_vec3 *ret, t_vec3 vec, float mult);
void			ft_vec4scale(t_vec4 *ret, t_vec4 vec, float mult);

/*
** norm/length/magnitude vecor
*/

float			ft_vec2len(t_vec2 a);
float			ft_vec3len(t_vec3 a);
float			ft_vec4len(t_vec4 a);

/*
** normalize vecor
*/

void			ft_vec2normalize(t_vec2 *ret, t_vec2 vec);
void			ft_vec3normalize(t_vec3 *ret, t_vec3 vec);
void			ft_vec4normalize(t_vec4 *ret, t_vec4 vec);

/*
** cross vecor
*/

void			ft_vec3cross(t_vec3 *ret, t_vec3 a, t_vec3 b);

/*
** dot vecor
*/

float			ft_vec3dot(t_vec3 a, t_vec3 b);

/*
** IN BETWEEN
*/

void			ft_vec2transform(t_vec2 *vec, t_max2 max);
void			ft_vec3transform(t_vec3 *vec, t_max3 max);
void			ft_vec4transform(t_vec4 *vec, t_max4 max);

void			ft_vec3translate(t_max3 *max, t_vec3 vec);
void			ft_vec4translate(t_max4 *max, t_vec3 vec);

/*
** MATRICES
*/

/*
** basic operations
*/

void			ft_max3mult(t_max3 *m, t_max3 n);
void			ft_max4mult(t_max4 *m, t_max4 n);

void			ft_max2cpy(t_max2 *max1, t_max2 max2);
void			ft_max3cpy(t_max3 *max1, t_max3 max2);
void			ft_max4cpy(t_max4 *max1, t_max4 max2);

/*
** identity matrix init
*/

void			ft_max2identity(t_max2 *max);
void			ft_max3identity(t_max3 *max);
void			ft_max4identity(t_max4 *max);

/*
** init matrix
*/

void			ft_max2init(t_max2 *max);
void			ft_max3init(t_max3 *max);
void			ft_max4init(t_max4 *max);

/*
** perspectie matrix for 3D with OpenGl
*/

void			ft_max4perspective(t_max4 *max, t_perspective pers);

/*
** lookat_max for 3D with OpenGl
*/

void			ft_maxlookat(t_max4 *max, t_vec3 from,
				t_vec3 to, t_vec3 up);

/*
** rotate matrix
*/

void			ft_max4rotate_x(t_max4 *max, float angle);
void			ft_max4rotate_y(t_max4 *max, float angle);
void			ft_max4rotate_z(t_max4 *max, float angle);

#endif
