/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectranslate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 17:26:37 by gwojda            #+#    #+#             */
/*   Updated: 2018/11/02 12:04:13 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/*
** translate :
** /------------\
** | 1  0  0  X |
** | 0  1  0  Y |
** | 0  0  1  Z |
** | 0  0  0  1 |
** \------------/
*/

void	ft_vec4translate(t_max4 max, t_vec3 vec)
{
	max[0] = 1;
	max[1] = 0;
	max[2] = 0;
	max[3] = vec.x;
	max[4] = 0;
	max[5] = 1;
	max[6] = 0;
	max[7] = vec.y;
	max[8] = 0;
	max[9] = 0;
	max[10] = 1;
	max[11] = vec.z;
	max[12] = 0;
	max[13] = 0;
	max[14] = 0;
	max[15] = 1;
}

/*
** transform :
** /---------\
** | 1  0  X |
** | 0  1  Y |
** | 0  0  1 |
** \---------/
*/

void	ft_vec3translate(t_max3 max, t_vec3 vec)
{
	max[0] = 1;
	max[1] = 0;
	max[2] = vec.x;
	max[3] = 0;
	max[4] = 1;
	max[5] = vec.y;
	max[6] = 0;
	max[7] = 0;
	max[8] = 1;
}
