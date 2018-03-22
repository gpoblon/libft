/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norme_vector.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 15:14:29 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/16 16:02:43 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

float	norme_vector4f(t_fvect4 a)
{
	return (sqrt((a[0] * a[0]) + (a[1] * a[1]) + (a[2] * a[2]) +
	(a[3] * a[3])));
}

float	norme_vector3f(t_fvect3 a)
{
	return (sqrt((a[0] * a[0]) + (a[1] * a[1]) + (a[2] * a[2])));
}

float	norme_vector2f(t_fvect2 a)
{
	return (sqrt((a[0] * a[0]) + (a[1] * a[1])));
}
