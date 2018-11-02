/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecsum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:22 by gpoblon           #+#    #+#             */
/*   Updated: 2018/11/02 16:11:40 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_vec4sum(t_vec4 *ret, t_vec4 a, t_vec4 b)
{
	ret->x = a.x + b.x;
	ret->y = a.y + b.y;
	ret->z = a.z + b.z;
	ret->w = a.w + b.w;
}

void	ft_vec3sum(t_vec3 *ret, t_vec3 a, t_vec3 b)
{
	ret->x = a.x + b.x;
	ret->y = a.y + b.y;
	ret->z = a.z + b.z;
}

void	ft_vec2sum(t_vec2 *ret, t_vec2 a, t_vec2 b)
{
	ret->x = a.x + b.x;
	ret->y = a.y + b.y;
}
