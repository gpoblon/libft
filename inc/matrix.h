/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 15:36:03 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 12:08:04 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef matrix_H
# define matrix_H

# include <math.h>

typedef double	t_max4d[16];
typedef double	t_max3d[9];
typedef double	t_max2d[4];

typedef double	t_vec4d[4];
typedef double	t_vec3d[3];
typedef double	t_vec2d[2];

typedef float	t_max4[16];
typedef float	t_max3[9];
typedef float	t_max2[4];

typedef float	t_vec4[4];
typedef float	t_vec3[3];
typedef float	t_vec2[2];

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

void			ft_vec2sum(t_vec2 a, t_vec2 b);
void			ft_vec3sum(t_vec3 a, t_vec3 b);
void			ft_vec4sum(t_vec4 a, t_vec4 b);

void			ft_vec2sub(t_vec2 a, t_vec2 b);
void			ft_vec3sub(t_vec3 a, t_vec3 b);
void			ft_vec4sub(t_vec4 a, t_vec4 b);

void			ft_vec2cpy(t_vec2 a, t_vec2 b);
void			ft_vec3cpy(t_vec3 a, t_vec3 b);
void			ft_vec4cpy(t_vec4 a, t_vec4 b);

void			ft_vec4mult(t_vec4 vec, float mult);
void			ft_vec3mult(t_vec4 vec, float mult);
void			ft_vec2mult(t_vec4 vec, float mult);

/*
** norme vecor
*/

float			ft_vec4norm(t_vec4 a);
float			ft_vec3norm(t_vec3 a);
float			ft_vec2norm(t_vec2 a);

/*
** normalize vecor
*/

void			ft_vec4normalize(t_vec4 vec);
void			ft_vec3normalize(t_vec3 vec);
void			ft_vec2normalize(t_vec2 vec);

/*
** cross vecor
*/

void			ft_vec3cross(t_vec3 a, t_vec3 b);

/*
** dot vecor
*/

float			ft_vec3dot(t_vec3 a, t_vec3 b);

/*
** IN BETWEEN
*/

void			ft_vec2transform(t_max2 matrix, t_vec2 vec);
void			ft_vec3transform(t_max3 matrix, t_vec3 vec);
void			ft_vec4transform(t_max4 matrix, t_vec4 vec);

void			ft_vec4translate(t_max4 matrix, t_vec3 vec);
void			ft_vec3translate(t_max3 matrix, t_vec3 vec);

/*
** MATRICES
*/

/*
** basic operations
*/

void			ft_max4mult(t_max4 m, t_max4 n);
void			ft_max3mult(t_max3 mat1, t_max3 mat2);

void			ft_max4cpy(t_max4 mat1, t_max4 mat2);
void			ft_max3cpy(t_max3 mat1, t_max3 mat2);
void			ft_max2cpy(t_max2 mat1, t_max2 mat2);

/*
** identity matrix init
*/

void			ft_max4identity(t_max3 matrix);
void			ft_max3identity(t_max3 matrix);
void			ft_max2identity(t_max2 matrix);

/*
** init matrix
*/

void			ft_max4init(t_max3 matrix);
void			ft_max3init(t_max3 matrix);
void			ft_max2init(t_max2 matrix);

/*
** perspectie matrix for 3D with OpenGl
*/

void			ft_max4perspective(t_max4 mat, t_perspective pers);

/*
** lookat_max for 3D with OpenGl
*/

void			ft_maxlookat(t_max4 mat, t_vec3 eye,
				t_vec3 center, t_vec3 up);

/*
** rotate matrix
*/

void			ft_max4rotate_x(t_max4 mat, float angle);
void			ft_max4rotate_y(t_max4 mat, float angle);
void			ft_max4rotate_z(t_max4 mat, float angle);

#endif
