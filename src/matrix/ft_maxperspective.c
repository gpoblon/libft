/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxperspective.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 13:43:24 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/30 15:38:38 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_max4perspective(t_max4 max, t_perspective pers)
{
	float	tan_half_angle;

	ft_max4init(max);
	tan_half_angle = tan(pers.angle / 2.0f);
	max[0] = (1.0f / (pers.ratio * tan_half_angle));
	max[5] = (1.0f / (tan_half_angle));
	max[10] = (-(pers.far + pers.near) / (pers.far - pers.near));
	max[14] = -1.0f;
	max[11] = (-(2.0f * pers.far * pers.near) / (pers.far - pers.near));
}
