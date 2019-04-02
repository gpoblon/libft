/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbsearch_delim.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:30:02 by gpoblon           #+#    #+#             */
/*   Updated: 2019/01/07 16:30:02 by gpoblon          ###   ########.fr       */
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

void		ft_cbsearch_delim(t_cbuffer *cbuf)
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
