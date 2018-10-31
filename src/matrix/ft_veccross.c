/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veccross.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:57 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 15:20:38 by gpoblon          ###   ########.fr       */
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

void	ft_vec3cross(t_vec3 a, t_vec3 b)
{
	t_vec3	tmp;

	ft_vec3cpy(tmp, a);
	tmp[0] = (a[1] * b[2]) - (a[2] * b[1]);
	tmp[1] = (b[0] * a[2]) - (a[0] * b[2]);
	tmp[2] = (a[0] * b[1]) - (a[1] * b[0]);
	ft_vec3cpy(a, tmp);
}
