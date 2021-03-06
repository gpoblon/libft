/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectranslate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 17:26:37 by gwojda            #+#    #+#             */
/*   Updated: 2019/01/03 17:32:00 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** translate :
** /------------\
** | 1  0  0  X |
** | 0  1  0  Y |
** | 0  0  1  Z |
** | 0  0  0  1 |
** \------------/
*/

void	ft_vec4translate(t_max4 *max, t_vec3 vec)
{
	max->x.w += vec.x;
	max->y.w += vec.y;
	max->z.w += vec.z;
}

/*
** transform :
** /---------\
** | 1  0  X |
** | 0  1  Y |
** | 0  0  1 |
** \---------/
*/

void	ft_vec3translate(t_max3 *max, t_vec3 vec)
{
	max->x.z += vec.x;
	max->y.z += vec.y;
}
