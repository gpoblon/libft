/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 19:28:04 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 14:32:31 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		n_length(long int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	long int	nb;
	char		*result;
	size_t		i;

	nb = n;
	i = 0;
	result = (char*)malloc(sizeof(char) * (n_length(nb) + 1));
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		result[i] = '-';
	}
	i = n_length(n);
	result[i] = '\0';
	if (nb == 0)
		result[--i] = 0 + '0';
	while (nb != 0)
	{
		i--;
		result[i] = (nb % 10) + '0';
		nb /= 10;
	}
	return (result);
}
