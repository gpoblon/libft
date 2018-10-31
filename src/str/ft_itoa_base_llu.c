/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_llu.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 23:15:12 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:52:35 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

static int	ft_nblen_base_llu(unsigned long long nb, int base)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		++len;
	while (nb)
	{
		nb /= base;
		++len;
	}
	return (len);
}

char		*ft_itoa_base_llu(unsigned long long nb, int base)
{
	char const	base_digit[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	char		*str;
	int			i;

	i = ft_nblen_base_llu(nb, base);
	str = (char *)malloc(sizeof(char) * i + 1);
	if (base < 2 || base > 36 || !str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	str[i] = '\0';
	while (nb != 0)
	{
		str[--i] = base_digit[nb % base];
		nb /= base;
	}
	return (str);
}
