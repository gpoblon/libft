/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veccpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:11:03 by gpoblon           #+#    #+#             */
/*   Updated: 2018/11/02 16:14:56 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_vec4cpy(t_vec4 *a, t_vec4 b)
{
	a->x = b.x;
	a->y = b.y;
	a->z = b.z;
	a->w = b.w;
}

void	ft_vec3cpy(t_vec3 *a, t_vec3 b)
{
	a->x = b.x;
	a->y = b.y;
	a->z = b.z;
}

void	ft_vec2cpy(t_vec2 *a, t_vec2 b)
{
	a->x = b.x;
	a->y = b.y;
}
