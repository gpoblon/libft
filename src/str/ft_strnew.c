/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 16:49:43 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:52:35 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i < size + 1)
	{
		str[i] = '\0';
		++i;
	}
	return (str);
}
