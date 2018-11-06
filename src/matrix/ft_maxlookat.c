/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxlookat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 14:04:39 by gwojda            #+#    #+#             */
/*   Updated: 2018/11/06 15:48:13 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** fking norme
*/

/*
** xaxis.x       xaxis.y         xaxis.z      -dot(xaxis, from)
** yaxis.x       yaxis.y         yaxis.z      -dot(yaxis, from)
** zaxis.x       zaxis.y         zaxis.z       -dot(zaxis, from)
** 0                 0                  0              1
*/

void		ft_maxlookat(t_max4 *max, t_vec3 from, t_vec3 to, t_vec3 ref_vec)
{
	t_vec3 forward;
	t_vec3 right;
	t_vec3 up;

	ft_vec3normalize(&ref_vec, ref_vec);
	ft_vec3sub(&forward, from, to);
	ft_vec3normalize(&forward, forward);
	ft_vec3cross(&right, ref_vec, forward);
	ft_vec3cross(&up, forward, right);
	ft_max4init(max);
	max->x.x = right.x;
	max->x.y = right.y;
	max->x.z = right.z;
	max->x.w = -ft_vec3dot(right, from);
	max->y.x = up.x;
	max->y.y = up.y;
	max->y.z = up.z;
	max->y.w = -ft_vec3dot(up, from);
	max->z.x = forward.x;
	max->z.y = forward.y;
	max->z.z = forward.z;
	max->z.w = -ft_vec3dot(forward, from);
	max->w.x = 0;
	max->w.y = 0;
	max->w.z = 0;
	max->w.w = 1.0f;
}

// this one maxes more sense to me
/*
	max->x.x = right.x;
	max->x.y = right.y;
	max->x.z = right.z;
	max->x.w = 0;
	max->y.x = up.x;
	max->y.y = up.y;
	max->y.z = up.z;
	max->y.w = 0;
	max->z.x = forward.x;
	max->z.y = forward.y;
	max->z.z = forward.z;
	max->z.w = 0;
	max->w.x = -ft_vec3dot(right, from);
	max->w.y = -ft_vec3dot(up, from);
	max->w.z = -ft_vec3dot(forward, from);
	max->w.w = 1.0f;
*/
