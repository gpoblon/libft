/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 14:46:29 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/17 16:27:46 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long long	ft_pow(unsigned long long n, unsigned long long pow)
{
	if (pow == 0)
		return (1);
	return (n * ft_pow(n, pow - 1));
}
