/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxscaled.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 16:00:13 by gwojda            #+#    #+#             */
/*   Updated: 2019/01/29 16:20:07 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** init matrix to become :
** /------------\
** | 1  0  0  0 |
** | 0  1  0  0 |
** | 0  0  1  0 |
** | 0  0  0  1 |
** \------------/
*/

void	ft_max4scaled(t_max4 *max, float scale)
{
	max->x.x *= scale;
	max->y.y *= scale;
	max->z.z *= scale;
	max->w.w = 1.0;
}

/*
** init matrix to become :
** /---------\
** | 1  0  0 |
** | 0  1  0 |
** | 0  0  1 |
** \---------/
*/

void	ft_max3scaled(t_max3 *max, float scale)
{
	max->x.x *= scale;
	max->y.y *= scale;
	max->z.z = 1.0;
}

/*
** init matrix to become :
** /------\
** | 1  0 |
** | 0  1 |
** \------/
*/

void	ft_max2scaled(t_max2 *max, float scale)
{
	max->x.x *= scale;
	max->y.y = 1.0;
}
