/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxlookat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 14:04:39 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 15:20:57 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** fking norme
*/

/*
** xaxis.x       xaxis.y         xaxis.z      -dot(xaxis, cam)
** yaxis.x       yaxis.y         yaxis.z      -dot(yaxis, cam)
** zaxis.x       zaxis.y         zaxis.z       -dot(zaxis, cam)
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

void		ft_maxlookat(t_max4 max, t_vec3 cam,
			t_vec3 center, t_vec3 up)
{
	t_vec3	x;
	t_vec3	y;
	t_vec3	z;

	ft_vec3cpy(z, cam);
	ft_vec3sub(z, center);
	ft_vec3normalize(z);
	ft_vec3cpy(x, up);
	ft_vec3cross(x, z);
	ft_vec3normalize(x);
	ft_vec3cpy(y, z);
	ft_vec3cross(y, x);
	ft_vec3normalize(y);
	max[3] = -ft_vec3dot(x, cam);
	max[7] = -ft_vec3dot(y, cam);
	max[11] = -ft_vec3dot(z, cam);
	set_max(max, x, y, z);
}
