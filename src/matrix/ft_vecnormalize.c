/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecnormalize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:37 by gpoblon           #+#    #+#             */
/*   Updated: 2018/11/02 17:08:45 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_vec4normalize(t_vec4 *vec)
{
	float len;

	len = ft_vec4len(*vec);
	if (len > 0)
	{
		vec->x = vec->x / len;
		vec->y = vec->y / len;
		vec->z = vec->z / len;
		vec->w = vec->w / len;
	}
}

void	ft_vec3normalize(t_vec3 *vec)
{
	float len;

	len = ft_vec3len(*vec);
	if (len > 0)
	{
		vec->x = vec->x / len;
		vec->y = vec->y / len;
		vec->z = vec->z / len;
	}
}

void	ft_vec2normalize(t_vec2 *vec)
{
	float len;

	len = ft_vec2len(*vec);
	if (len > 0)
	{
		vec->x = vec->x / len;
		vec->y = vec->y / len;
	}
}
