/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecnormalize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:37 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/30 14:23:28 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_vec4normalize(t_vec4 vect)
{
	float dist;

	dist = ft_vec4norm(vect);
	vect[0] = vect[0] / dist;
	vect[1] = vect[1] / dist;
	vect[2] = vect[2] / dist;
	vect[3] = vect[3] / dist;
}

void	ft_vec3normalize(t_vec3 vect)
{
	float dist;

	dist = ft_vec3norm(vect);
	vect[0] = vect[0] / dist;
	vect[1] = vect[1] / dist;
	vect[2] = vect[2] / dist;
}

void	ft_vec2normalize(t_vec2 vect)
{
	float dist;

	dist = ft_vec2norm(vect);
	vect[0] = vect[0] / dist;
	vect[1] = vect[1] / dist;
}
