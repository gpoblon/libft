/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecdot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:53 by gpoblon           #+#    #+#             */
/*   Updated: 2018/11/02 11:50:55 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

float	ft_vec3dot(t_vec3 a, t_vec3 b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}
