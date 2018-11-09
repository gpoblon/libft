/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecscale.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:48 by gpoblon           #+#    #+#             */
/*   Updated: 2018/11/09 16:56:36 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_vec4scale(t_vec4 *ret, t_vec4 vec, float mult)
{
	ret->x = vec.x * mult;
	ret->y = vec.y * mult;
	ret->z = vec.z * mult;
	ret->w = vec.w * mult;
}

void	ft_vec3scale(t_vec3 *ret, t_vec3 vec, float mult)
{
	ret->x = vec.x * mult;
	ret->y = vec.y * mult;
	ret->z = vec.z * mult;
}

void	ft_vec2scale(t_vec2 *ret, t_vec2 vec, float mult)
{
	ret->x = vec.x * mult;
	ret->y = vec.y * mult;
}
