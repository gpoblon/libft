/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 16:49:43 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/04 14:02:04 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	str = (char *)malloc(sizeof(char) * size + 1);
	CHECKPVN(str);
	while (i < size + 1)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
