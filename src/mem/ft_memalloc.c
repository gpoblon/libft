/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 16:31:48 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:50:35 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	*ft_memalloc(size_t size)
{
	void *allocated_mem;

	allocated_mem = malloc(size);
	if (allocated_mem)
		ft_bzero(allocated_mem, size);
	return (allocated_mem);
}
