/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:38:24 by gpoblon           #+#    #+#             */
/*   Updated: 2017/01/18 12:38:32 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_char_to_base(const char c)
{
	int	n;

	if (c >= '0' && c <= '9')
		n = c - '0';
	else if (c >= 'a' && c <= 'f')
		n = c - 'a' + 10;
	else if (c >= 'A' && c <= 'F')
		n = c - 'A' + 10;
	else
		n = -1;
	return (n);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int			i;
	long int	res;
	int			sign;
	int			current;

	i = 0;
	res = 0;
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		++i;
	while(ft_char_to_base(str[i]) != -1)
	{
		current = ft_char_to_base(str[i]);
		res = res * str_base + current;
		++i;
	}
	return (sign * res);
}
