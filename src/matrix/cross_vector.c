/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cross_vector.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 14:30:07 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/16 14:45:06 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** jconnais que le produit vectoriel de vector en 3D,
** faudrait chercher pour les autre dimensions !
*/


/*
** init matrix to become :
** /---\    /---\    /---------\
** | a |    | d |    | bf - ce |
** | b | ^  | e | =  | dc - af |
** | c |    | f |    | ae - db |
** \---/    \---/    \---------/
*/


void	cross_vector3f(t_fvect3 a, t_fvect3 b)
{
	t_fvect3	tmp;

	cpy_vector3f(tmp, a);
	tmp[0] = (a[1] * b[2]) - (a[2] * b[1]);
	tmp[1] = (b[0] * a[2]) - (a[0] * b[2]);
	tmp[2] = (a[0] * b[1]) - (a[1] * b[0]);
	cpy_vector3f(a, tmp);
}
