/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_vector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 14:06:13 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/18 19:13:29 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	normalize_vector4f(fvect4 vect)
{
	float dist;

	dist = norme_vector4f(vect);
	vect[0] = vect[0] / dist;
	vect[1] = vect[1] / dist;
	vect[2] = vect[2] / dist;
	vect[3] = vect[3] / dist;
}

void	normalize_vector3f(fvect3 vect)
{
	float dist;

	dist = norme_vector3f(vect);
	vect[0] = vect[0] / dist;
	vect[1] = vect[1] / dist;
	vect[2] = vect[2] / dist;
}

void	normalize_vector2f(fvect2 vect)
{
	float dist;

	dist = norme_vector2f(vect);
	vect[0] = vect[0] / dist;
	vect[1] = vect[1] / dist;
}
