/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxmult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 17:26:37 by gwojda            #+#    #+#             */
/*   Updated: 2018/11/06 14:15:46 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** init matrix to become :
** /------------\
** | 0  1  2  3 |
** | 4  5  6  7 |
** | 8  9  10 11|
** | 12 13 14 15|
** \------------/
*/

void	ft_max4mult(t_max4 *m, t_max4 n)
{
	t_max4	t;

	ft_max4cpy(&t, *m);
	m->x.x = t.x.x * n.x.x + t.x.y * n.y.x + t.x.z * n.z.x + t.x.w * n.w.x;
	m->x.y = t.x.x * n.x.y + t.x.y * n.y.y + t.x.z * n.z.y + t.x.w * n.w.y;
	m->x.z = t.x.x * n.x.z + t.x.y * n.y.z + t.x.z * n.z.z + t.x.w * n.w.z;
	m->x.w = t.x.x * n.x.w + t.x.y * n.y.w + t.x.z * n.z.w + t.x.w * n.w.w;
	m->y.x = t.y.x * n.x.x + t.y.y * n.y.x + t.y.z * n.z.x + t.y.w * n.w.x;
	m->y.y = t.y.x * n.x.y + t.y.y * n.y.y + t.y.z * n.z.y + t.y.w * n.w.y;
	m->y.z = t.y.x * n.x.z + t.y.y * n.y.z + t.y.z * n.z.z + t.y.w * n.w.z;
	m->y.w = t.y.x * n.x.w + t.y.y * n.y.w + t.y.z * n.z.w + t.y.w * n.w.w;
	m->z.x = t.z.x * n.x.x + t.z.y * n.y.x + t.z.z * n.z.x + t.z.w * n.w.x;
	m->z.y = t.z.x * n.x.y + t.z.y * n.y.y + t.z.z * n.z.y + t.z.w * n.w.y;
	m->z.z = t.z.x * n.x.z + t.z.y * n.y.z + t.z.z * n.z.z + t.z.w * n.w.z;
	m->z.w = t.z.x * n.x.w + t.z.y * n.y.w + t.z.z * n.z.w + t.z.w * n.w.w;
	m->w.x = t.w.x * n.x.x + t.w.y * n.y.x + t.w.z * n.z.x + t.w.w * n.w.x;
	m->w.y = t.w.x * n.x.y + t.w.y * n.y.y + t.w.z * n.z.y + t.w.w * n.w.y;
	m->w.z = t.w.x * n.x.z + t.w.y * n.y.z + t.w.z * n.z.z + t.w.w * n.w.z;
	m->w.w = t.w.x * n.x.w + t.w.y * n.y.w + t.w.z * n.z.w + t.w.w * n.w.w;
}

/*
** init matrix to become :
** /---------\
** | 0  1  2 |
** | 3  4  5 |
** | 6  7  8 |
** \---------/
*/

void	ft_max3mult(t_max3 *m, t_max3 n)
{
	t_max3	tmp;

	ft_max3cpy(&tmp, *m);
	m->x.x = tmp.x.x * n.x.x + tmp.x.y * n.y.x + tmp.x.z * n.z.x;
	m->x.y = tmp.x.x * n.x.y + tmp.x.y * n.y.y + tmp.x.z * n.z.y;
	m->x.z = tmp.x.x * n.x.z + tmp.x.y * n.y.z + tmp.x.z * n.z.z;
	m->y.x = tmp.y.x * n.x.x + tmp.y.y * n.y.x + tmp.y.z * n.z.x;
	m->y.y = tmp.y.x * n.x.y + tmp.y.y * n.y.y + tmp.y.z * n.z.y;
	m->y.z = tmp.y.x * n.x.z + tmp.y.y * n.y.z + tmp.y.z * n.z.z;
	m->z.x = tmp.z.x * n.x.x + tmp.z.y * n.x.y + tmp.z.z * n.x.z;
	m->z.y = tmp.z.x * n.y.x + tmp.z.y * n.y.y + tmp.z.z * n.y.z;
	m->z.z = tmp.z.x * n.z.x + tmp.z.y * n.z.y + tmp.z.z * n.z.z;
}
