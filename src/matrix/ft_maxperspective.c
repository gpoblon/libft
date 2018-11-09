/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxperspective.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 13:43:24 by gwojda            #+#    #+#             */
/*   Updated: 2018/11/08 17:03:07 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_max4perspective(t_max4 *max, t_perspective pers)
{
	float	scale;

	ft_max4init(max);
	max->w.z = -1.0f;
	scale = tan(pers.angle * 0.5f * (PI / 180)) * pers.near;
	max->x.x = pers.near / (scale * pers.ratio);
	max->y.y = pers.near / scale;
	max->z.z = -((pers.far + pers.near) / (pers.far - pers.near));
	max->z.w = -((2 * pers.far * pers.near) / (pers.far - pers.near));
	// scale = tan((pers.angle * (PI / 180)) / 2.0f);
	// max->x.x = pers.ratio * scale;
	// max->y.y = scale;
	// max->z.z = -pers.far / (pers.far - pers.near);
	// max->z.w = -pers.far * pers.near / (pers.far - pers.near);
}
