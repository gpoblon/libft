/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_mult.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 13:29:38 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/19 13:30:45 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	vector_mult4ff(fvect4 vect, float mult)
{
	vect[0] = vect[0] * mult;
	vect[1] = vect[1] * mult;
	vect[2] = vect[2] * mult;
	vect[3] = vect[3] * mult;
}

void	vector_mult3ff(fvect4 vect, float mult)
{
	vect[0] = vect[0] * mult;
	vect[1] = vect[1] * mult;
	vect[2] = vect[2] * mult;
}

void	vector_mult2ff(fvect4 vect, float mult)
{
	vect[0] = vect[0] * mult;
	vect[1] = vect[1] * mult;
}
