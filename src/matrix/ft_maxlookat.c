/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxlookat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 14:04:39 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/30 16:33:00 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** fking norme
*/

/*
** xaxis.x       xaxis.y         xaxis.z      -dot(xaxis, eye)
** yaxis.x       yaxis.y         yaxis.z      -dot(yaxis, eye)
** zaxis.x       zaxis.y         zaxis.z       -dot(zaxis, eye)
** 0                 0                  0              1
*/

static void	set_max(t_max4 max, t_vec3 x, t_vec3 y, t_vec3 z)
{
	max[0] = x[0];
	max[1] = x[1];
	max[2] = x[2];
	max[4] = y[0];
	max[5] = y[1];
	max[6] = y[2];
	max[8] = z[0];
	max[9] = z[1];
	max[10] = z[2];
	max[12] = 0;
	max[13] = 0;
	max[14] = 0;
	max[15] = 1.0f;
}

void		ft_maxlookat(t_max4 max, t_vec3 eye,
			t_vec3 center, t_vec3 up)
{
	t_vec3	x;
	t_vec3	y;
	t_vec3	z;

	ft_vec3cpy(z, eye);
	ft_vec3sub(z, center);
	ft_vec3normalize(z);
	ft_vec3cpy(x, up);
	ft_vec3cross(x, z);
	ft_vec3normalize(x);
	ft_vec3cpy(y, z);
	ft_vec3cross(y, x);
	ft_vec3normalize(y);
	max[3] = -ft_vec3dot(x, eye);
	max[7] = -ft_vec3dot(y, eye);
	max[11] = -ft_vec3dot(z, eye);
	set_max(max, x, y, z);
}
