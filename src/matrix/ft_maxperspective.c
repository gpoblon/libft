/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxperspective.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 13:43:24 by gwojda            #+#    #+#             */
/*   Updated: 2018/11/06 13:41:08 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_max4perspective(t_max4 *max, t_perspective pers)
{
	float	tan_half_angle;

	ft_max4init(max);
	tan_half_angle = tan(pers.angle / 2.0f);
	max->x.x = (1.0f / (pers.ratio * tan_half_angle));
	max->y.y = (1.0f / (tan_half_angle));
	max->z.z = (-(pers.far + pers.near) / (pers.far - pers.near));
	max->w.z = -1.0f;
	max->w.x = (-(2.0f * pers.far * pers.near) / (pers.far - pers.near));
}
