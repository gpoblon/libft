/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_cb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:31:05 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/05 14:31:05 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cb.h"

void	init_cb(t_cbuffer *cbuf, size_t size)
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
