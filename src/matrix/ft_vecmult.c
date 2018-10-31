/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecmult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:48 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/30 14:23:28 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_vec4mult(t_vec4 vect, float mult)
{
	vect[0] = vect[0] * mult;
	vect[1] = vect[1] * mult;
	vect[2] = vect[2] * mult;
	vect[3] = vect[3] * mult;
}

void	ft_vec3mult(t_vec4 vect, float mult)
{
	vect[0] = vect[0] * mult;
	vect[1] = vect[1] * mult;
	vect[2] = vect[2] * mult;
}

void	ft_vec2mult(t_vec4 vect, float mult)
{
	vect[0] = vect[0] * mult;
	vect[1] = vect[1] * mult;
}
