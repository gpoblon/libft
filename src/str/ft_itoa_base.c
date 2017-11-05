/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 23:15:12 by gpoblon           #+#    #+#             */
/*   Updated: 2017/01/03 14:08:37 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen_base(long long nb, int base)
{
	size_t	len;

	len = 0;
	if (nb <= 0)
		++len;
	while (nb)
	{
		nb /= base;
		++len;
	}
	return (len);
}

char		*ft_itoa_base(long long n, int base)
{
	char const			base_digit[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	char				*str;
	unsigned long long	nb;
	int					i;

	nb = n;
	i = ft_nblen_base(n, base);
	str = (char *)malloc(sizeof(char) * i + 1);
	if (base < 2 || base > 36 || !str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nb = -n;
	}
	str[i] = '\0';
	while (nb != 0)
	{
		str[--i] = base_digit[nb % base];
		nb /= base;
	}
	return (str);
}
