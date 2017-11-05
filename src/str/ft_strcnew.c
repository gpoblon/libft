/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 12:59:34 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/12 20:02:08 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcnew(size_t n, char c)
{
	char	*str_new;

	str_new = ft_strnew(n);
	CHECKPVN(str_new);
	while (n)
	{
		--n;
		str_new[n] = c;
	}
	return (str_new);
}
