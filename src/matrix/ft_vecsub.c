/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:31 by gpoblon           #+#    #+#             */
/*   Updated: 2018/11/02 14:29:36 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_vec4sub(t_vec4 *ret, t_vec4 a, t_vec4 b)
{
	ret->x = a.x - b.x;
	ret->y = a.y - b.y;
	ret->z = a.z - b.z;
	ret->w = a.w - b.w;
}

void	ft_vec3sub(t_vec3 *ret, t_vec3 a, t_vec3 b)
{
	ret->x = a.x - b.x;
	ret->y = a.y - b.y;
	ret->z = a.z - b.z;
}

void	ft_vec2sub(t_vec2 *ret, t_vec2 a, t_vec2 b)
{
	ret->x = a.x - b.x;
	ret->y = a.y - b.y;
}
