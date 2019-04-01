/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 12:59:34 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:52:35 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strcnew(size_t n, char c)
{
	char	*str_new;

	if (!(str_new = ft_strnew(n)))
		return (NULL);
	while (n)
	{
		--n;
		str_new[n] = c;
	}
	return (str_new);
}
