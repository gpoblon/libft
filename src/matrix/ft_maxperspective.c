/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxperspective.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 13:43:24 by gwojda            #+#    #+#             */
/*   Updated: 2019/04/02 16:05:19 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_max4perspective(t_max4 *max, t_perspective pers)
{
	float	scale;

	ft_max4init(max);
	scale = tan(pers.angle * 0.5f * (PI / 180)) * pers.near;
	max->x.x = pers.near / (scale * pers.ratio);
	max->y.y = pers.near / scale;
	max->z.z = -((pers.far + pers.near) / (pers.far - pers.near));
	max->z.w = -((2 * pers.far * pers.near) / (pers.far - pers.near));
	max->w.z = -1.0f;
}
