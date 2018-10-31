/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbinit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:31:05 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/30 13:47:59 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cb.h"

void	ft_cbinit(t_cbuffer *cbuf, size_t size)
{
	cbuf->buffer = (char *)malloc(sizeof(char) * (size + 1));
	ft_bzero(cbuf->buffer, size + 1);
	cbuf->size = size;
	cbuf->start = 0;
	cbuf->ind = 0;
	cbuf->dpos = 0;
	cbuf->delim = '\0';
	cbuf->state = NO_DELIM;
}
