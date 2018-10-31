/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxmult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 17:26:37 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 15:20:51 by gpoblon          ###   ########.fr       */
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

void	ft_max4mult(t_max4 m, t_max4 n)
{
	t_max4	t;

	ft_max4cpy(t, m);
	m[0] = (t[0] * n[0]) + (t[1] * n[4]) + (t[2] * n[8]) + (t[3] * n[12]);
	m[1] = (t[0] * n[1]) + (t[1] * n[5]) + (t[2] * n[9]) + (t[3] * n[13]);
	m[2] = (t[0] * n[2]) + (t[1] * n[6]) + (t[2] * n[10]) + (t[3] * n[14]);
	m[3] = (t[0] * n[3]) + (t[1] * n[7]) + (t[2] * n[11]) + (t[3] * n[15]);
	m[4] = (t[4] * n[0]) + (t[5] * n[4]) + (t[6] * n[8]) + (t[7] * n[12]);
	m[5] = (t[4] * n[1]) + (t[5] * n[5]) + (t[6] * n[9]) + (t[7] * n[13]);
	m[6] = (t[4] * n[2]) + (t[5] * n[6]) + (t[6] * n[10]) + (t[7] * n[14]);
	m[7] = (t[4] * n[3]) + (t[5] * n[7]) + (t[6] * n[11]) + (t[7] * n[15]);
	m[8] = (t[8] * n[0]) + (t[9] * n[4]) + (t[10] * n[8]) + (t[11] * n[12]);
	m[9] = (t[8] * n[1]) + (t[9] * n[5]) + (t[10] * n[9]) + (t[11] * n[13]);
	m[10] = (t[8] * n[2]) + (t[9] * n[6]) + (t[10] * n[10]) + (t[11] * n[14]);
	m[11] = (t[8] * n[3]) + (t[9] * n[7]) + (t[10] * n[11]) + (t[11] * n[15]);
	m[12] = (t[12] * n[0]) + (t[13] * n[4]) + (t[14] * n[8]) + (t[15] * n[12]);
	m[13] = (t[12] * n[1]) + (t[13] * n[5]) + (t[14] * n[9]) + (t[15] * n[13]);
	m[14] = (t[12] * n[2]) + (t[13] * n[6]) + (t[14] * n[10]) + (t[15] * n[14]);
	m[15] = (t[12] * n[3]) + (t[13] * n[7]) + (t[14] * n[11]) + (t[15] * n[15]);
}

/*
** init matrix to become :
** /---------\
** | 0  1  2 |
** | 3  4  5 |
** | 6  7  8 |
** \---------/
*/

void	ft_max3mult(t_max3 max1, t_max3 max2)
{
	t_max3	tmp;

	ft_max3cpy(tmp, max1);
	max1[0] = (tmp[0] * max2[0]) + (tmp[1] * max2[3]) + (tmp[2] * max2[6]);
	max1[1] = (tmp[0] * max2[1]) + (tmp[1] * max2[4]) + (tmp[2] * max2[7]);
	max1[2] = (tmp[0] * max2[2]) + (tmp[1] * max2[5]) + (tmp[2] * max2[8]);
	max1[3] = (tmp[3] * max2[0]) + (tmp[4] * max2[3]) + (tmp[5] * max2[6]);
	max1[4] = (tmp[3] * max2[1]) + (tmp[4] * max2[4]) + (tmp[5] * max2[7]);
	max1[5] = (tmp[3] * max2[2]) + (tmp[4] * max2[5]) + (tmp[5] * max2[8]);
	max1[6] = (tmp[6] * max2[0]) + (tmp[7] * max2[1]) + (tmp[8] * max2[2]);
	max1[7] = (tmp[6] * max2[3]) + (tmp[7] * max2[4]) + (tmp[8] * max2[5]);
	max1[8] = (tmp[6] * max2[6]) + (tmp[7] * max2[7]) + (tmp[8] * max2[8]);
}
