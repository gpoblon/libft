/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 19:28:04 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/19 00:11:20 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int		n_length(int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	long int nb;
	char *result;
	int i;

	nb = n;
	i = 0;
	result = (char*)malloc(sizeof(char) * (n_length(nb) + 1));
	if (!result)
		return (NULL);
	else
		result[n_length(n)] = '\0';
	if (nb < 0)
	{
		nb = nb * -1;
		result[i] = '-';
	}
	i = n_length(nb);
	while (nb != 0)
	{
	  	result[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	return (result);
}
