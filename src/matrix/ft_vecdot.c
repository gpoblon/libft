/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecdot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:10:53 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 15:30:36 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

float	ft_vec3dot(t_vec3 a, t_vec3 b)
{
	t_vec3	tmp1;
	float		t1;
	float		t2;
	float		t3;

	ft_vec3cpy(tmp1, a);
	ft_vec3sum(tmp1, b);
	t1 = ft_vec3len(tmp1) * ft_vec3len(tmp1);
	t2 = ft_vec3len(a) * ft_vec3len(a);
	t3 = ft_vec3len(b) * ft_vec3len(b);
	return (0.5 * (t1 - t2 - t3));
}
