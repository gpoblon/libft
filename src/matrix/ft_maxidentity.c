/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxidentity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 16:00:13 by gwojda            #+#    #+#             */
/*   Updated: 2019/01/29 15:33:18 by gpoblon          ###   ########.fr       */
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

void	ft_max4identity(t_max4 *max)
{
	max->x.x = 1.0;
	max->x.y = 0.0;
	max->x.z = 0.0;
	max->x.w = 0.0;
	max->y.x = 0.0;
	max->y.y = 1.0;
	max->y.z = 0.0;
	max->y.w = 0.0;
	max->z.x = 0.0;
	max->z.y = 0.0;
	max->z.z = 1.0;
	max->z.w = 0.0;
	max->w.x = 0.0;
	max->w.y = 0.0;
	max->w.z = 0.0;
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

void	ft_max3identity(t_max3 *max)
{
	max->x.x = 1.0;
	max->x.y = 0.0;
	max->x.z = 0.0;
	max->y.x = 0.0;
	max->y.y = 1.0;
	max->y.z = 0.0;
	max->z.x = 0.0;
	max->z.y = 0.0;
	max->z.z = 1.0;
}

/*
** init matrix to become :
** /------\
** | 1  0 |
** | 0  1 |
** \------/
*/

void	ft_max2identity(t_max2 *max)
{
	max->x.x = 1.0;
	max->x.y = 0.0;
	max->y.x = 0.0;
	max->y.y = 1.0;
}
