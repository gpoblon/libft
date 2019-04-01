/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:29:21 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 12:20:22 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "char.h"

char	*ft_str_toupper(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		++i;
	}
	return (str);
}
