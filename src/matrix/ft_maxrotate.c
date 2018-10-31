/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 11:55:14 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 15:37:09 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** init max to become :
** /----------------\
** | 1   0     0   0|
** | 0  cos  -sin  0|
** | 0  sin  cos   0|
** | 0   0    0    1|
** \----------------/
*/

void	ft_max4rotate_x(t_max4 max, float angle)
{
	max[0] = 1.0;
	max[1] = 0.0;
	max[2] = 0.0;
	max[3] = 0.0;
	max[4] = 0.0;
	max[5] = cos(angle);
	max[6] = -sin(angle);
	max[7] = 0.0;
	max[8] = 0.0;
	max[9] = sin(angle);
	max[10] = cos(angle);
	max[11] = 0.0;
	max[12] = 0.0;
	max[13] = 0.0;
	max[14] = 0.0;
	max[15] = 1.0;
}

/*
** init max to become :
** /---------------\
** | cos  0  sin  0|
** | 0    1   0   0|
** | -sin 0  cos  0|
** | 0    0   0   1|
** \---------------/
*/

void	ft_max4rotate_y(t_max4 max, float angle)
{
	max[0] = cos(angle);
	max[1] = 0.0;
	max[2] = sin(angle);
	max[3] = 0.0;
	max[4] = 0.0;
	max[5] = 1.0;
	max[6] = 0.0;
	max[7] = 0.0;
	max[8] = -sin(angle);
	max[9] = 0.0;
	max[10] = cos(angle);
	max[11] = 0.0;
	max[12] = 0.0;
	max[13] = 0.0;
	max[14] = 0.0;
	max[15] = 1.0;
}

/*
** init max to become :
** /-----------------\
** | cos -sin   0   0|
** | sin  cos   0   0|
** | 0     0    1   0|
** | 0     0    0   1|
** \-----------------/
*/

void	ft_max4rotate_z(t_max4 max, float angle)
{
	max[0] = cos(angle);
	max[1] = -sin(angle);
	max[2] = 0.0;
	max[3] = 0.0;
	max[4] = sin(angle);
	max[5] = cos(angle);
	max[6] = 0.0;
	max[7] = 0.0;
	max[8] = 0.0;
	max[9] = 0.0;
	max[10] = 1.0;
	max[11] = 0.0;
	max[12] = 0.0;
	max[13] = 0.0;
	max[14] = 0.0;
	max[15] = 1.0;
}
