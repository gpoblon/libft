/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 14:46:29 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:50:00 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

unsigned long long	ft_pow(unsigned long long n, unsigned long long power)
{
	if (power == 0)
		return (1);
	return (n * ft_pow(n, power - 1));
}
