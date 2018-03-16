/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot_vector.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 14:58:31 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/16 16:05:58 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

float	dot_vector3f(fvect3 a, fvect3 b)
{
	fvect3	tmp1;
	float	t1;
	float	t2;
	float	t3;

	cpy_vector3f(tmp1, a);
	sum_vector3f(tmp1, b);
	t1 = norme_vector3f(tmp1) * norme_vector3f(tmp1);
	t2 = norme_vector3f(a) * norme_vector3f(a);
	t3 = norme_vector3f(b) * norme_vector3f(b);
	return (0.5 * (t1 - t2 - t3));
}
