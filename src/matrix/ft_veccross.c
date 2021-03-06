/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veccross.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:57 by gpoblon           #+#    #+#             */
/*   Updated: 2018/11/06 09:30:33 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** jconnais que le produit veciel de vec en 3D,
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

void	ft_vec3cross(t_vec3 *ret, t_vec3 a, t_vec3 b)
{
	ret->x = (a.y * b.z) - (a.z * b.y);
	ret->y = (b.x * a.z) - (a.x * b.z);
	ret->z = (a.x * b.y) - (a.y * b.x);
}
