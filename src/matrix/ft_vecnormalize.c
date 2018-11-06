/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecnormalize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:37 by gpoblon           #+#    #+#             */
/*   Updated: 2018/11/06 11:28:33 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_vec4normalize(t_vec4 *ret, t_vec4 vec)
{
	float len;

	len = ft_vec4len(vec);
	if (len > 0)
	{
		ret->x = vec.x / len;
		ret->y = vec.y / len;
		ret->z = vec.z / len;
		ret->w = vec.w / len;
	}
}

void	ft_vec3normalize(t_vec3 *ret, t_vec3 vec)
{
	float len;

	len = ft_vec3len(vec);
	if (len > 0)
	{
		ret->x = vec.x / len;
		ret->y = vec.y / len;
		ret->z = vec.z / len;
	}
}

void	ft_vec2normalize(t_vec2 *ret, t_vec2 vec)
{
	float len;

	len = ft_vec2len(vec);
	if (len > 0)
	{
		ret->x = vec.x / len;
		ret->y = vec.y / len;
	}
}
