/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecmult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:48 by gpoblon           #+#    #+#             */
/*   Updated: 2018/11/02 14:25:28 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_vec4mult(t_vec4 *vec, float mult)
{
	vec->x = vec->x * mult;
	vec->y = vec->y * mult;
	vec->z = vec->z * mult;
	vec->w = vec->w * mult;
}

void	ft_vec3mult(t_vec4 *vec, float mult)
{
	vec->x = vec->x * mult;
	vec->y = vec->y * mult;
	vec->z = vec->z * mult;
}

void	ft_vec2mult(t_vec4 *vec, float mult)
{
	vec->x = vec->x * mult;
	vec->y = vec->y * mult;
}
