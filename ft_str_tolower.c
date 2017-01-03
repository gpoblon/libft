/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_tolower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:29:21 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/11 18:48:21 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_tolower(char *str)
{
	size_t	i;

	i = 0;
	CHECKPVN(str);
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		++i;
	}
	return (str);
}
