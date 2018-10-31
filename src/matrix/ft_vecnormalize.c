/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecnormalize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:37 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 15:45:00 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_vec4normalize(t_vec4 vect)
{
	float len;

	len = ft_vec4len(vect);
	if (len > 0)
	{
		vect[0] = vect[0] / len;
		vect[1] = vect[1] / len;
		vect[2] = vect[2] / len;
		vect[3] = vect[3] / len;
	}
}

void	ft_vec3normalize(t_vec3 vect)
{
	float len;

	len = ft_vec3len(vect);
	if (len > 0)
	{
		vect[0] = vect[0] / len;
		vect[1] = vect[1] / len;
		vect[2] = vect[2] / len;
	}
}

void	ft_vec2normalize(t_vec2 vect)
{
	float len;

	len = ft_vec2len(vect);
	if (len > 0)
	{
		vect[0] = vect[0] / len;
		vect[1] = vect[1] / len;
	}
}
