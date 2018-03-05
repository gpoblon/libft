/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_search_delim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:30:53 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/05 14:57:33 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cb.h"

static void	search_delim(t_cbuffer *cbuf)
{
	size_t i;

	i = 0;
	while (cbuf->start + i < cbuf->ind)
	{
		if (cbuf->buffer[cbuf->start + i] == cbuf->delim)
		{
			cbuf->dpos = cbuf->start + i;
			return ;
		}
		++i;
	}
	cbuf->state = NO_DELIM;
}

static void	search_delim_overflow(t_cbuffer *cbuf)
{
	size_t i;

	i = 0;
	while (cbuf->start + i < cbuf->size)
	{
		if (cbuf->buffer[cbuf->start + i] == cbuf->delim)
		{
			cbuf->dpos = cbuf->start + i;
			return ;
		}
		++i;
	}
	i = 0;
	while (i < cbuf->ind)
	{
		if (cbuf->buffer[i] == cbuf->delim)
		{
			cbuf->dpos = i;
			return ;
		}
		++i;
	}
	cbuf->state = NO_DELIM;
}

void		cb_search_delim(t_cbuffer *cbuf)
{
	if (!cbuf)
		return ;
	cbuf->state = DELIM;
	cbuf->dpos = cbuf->start;
	if (cbuf->start < cbuf->ind)
		search_delim(cbuf);
	else if (cbuf->start > cbuf->ind)
		search_delim_overflow(cbuf);
	else
		cbuf->state = NO_DELIM;
}
