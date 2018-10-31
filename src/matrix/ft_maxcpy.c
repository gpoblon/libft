/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 12:37:45 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/30 16:42:58 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	ft_max4cpy(t_max4 max1, t_max4 max2)
{
	max1[0] = max2[0];
	max1[1] = max2[1];
	max1[2] = max2[2];
	max1[3] = max2[3];
	max1[4] = max2[4];
	max1[5] = max2[5];
	max1[6] = max2[6];
	max1[7] = max2[7];
	max1[8] = max2[8];
	max1[9] = max2[9];
	max1[10] = max2[10];
	max1[11] = max2[11];
	max1[12] = max2[12];
	max1[13] = max2[13];
	max1[14] = max2[14];
	max1[15] = max2[15];
}

void	ft_max3cpy(t_max3 max1, t_max3 max2)
{
	max1[0] = max2[0];
	max1[1] = max2[1];
	max1[2] = max2[2];
	max1[3] = max2[3];
	max1[4] = max2[4];
	max1[5] = max2[5];
	max1[6] = max2[6];
	max1[7] = max2[7];
	max1[8] = max2[8];
}

void	ft_max2cpy(t_max2 max1, t_max2 max2)
{
	max1[0] = max2[0];
	max1[1] = max2[1];
	max1[2] = max2[2];
	max1[3] = max2[3];
}
