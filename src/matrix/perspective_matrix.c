/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perspective_matrix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 13:43:24 by gwojda            #+#    #+#             */
/*   Updated: 2018/04/17 14:11:23 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	perspective_matrix4f(t_fmat4 mat, t_perspective pers)
{
    float	tan_half_angle;

	init_matrix4f(mat);

    tan_half_angle = tan(pers.angle / 2.0f);
    mat[0] =  (1.0f / (pers.ratio * tan_half_angle));
    mat[5] = (1.0f / (tan_half_angle));
    mat[10] = (-(pers.far + pers.near) / (pers.far - pers.near));
    mat[14] = -1.0f;
    mat[11] = (-(2.0f * pers.far * pers.near) / (pers.far - pers.near));
}
