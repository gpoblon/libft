/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 18:38:03 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/17 20:37:30 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	if (!*s)
		return (NULL)
	while (n)
	{
		((t_uchar*)s)[n] = (t_uchar)c;
		n--;
	}
	return (s);
}
