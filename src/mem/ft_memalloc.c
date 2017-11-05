/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 16:31:48 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 14:28:51 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *allocated_mem;

	allocated_mem = malloc(size);
	if (allocated_mem)
		ft_bzero(allocated_mem, size);
	return (allocated_mem);
}
