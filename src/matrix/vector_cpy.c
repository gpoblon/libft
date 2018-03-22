/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_cpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 14:26:58 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/16 14:39:19 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	cpy_vector4f(t_fvect4 a, t_fvect4 b)
{
	a[0] = b[0];
	a[1] = b[1];
	a[2] = b[2];
	a[3] = b[3];
}

void	cpy_vector3f(t_fvect3 a, t_fvect3 b)
{
	a[0] = b[0];
	a[1] = b[1];
	a[2] = b[2];
}

void	cpy_vector2f(t_fvect2 a, t_fvect2 b)
{
	a[0] = b[0];
	a[1] = b[1];
}
