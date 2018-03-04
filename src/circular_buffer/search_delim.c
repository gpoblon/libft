#include "circular_buffer.h"

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

void		circular_buffer_search_delim(t_cbuffer *cbuf)
{
	if (!cbuf)
		return ;
	cbuf->state = DELIM;
	cbuf->dpos = cbuf->start;
	if (cbuf->start < cbuf->ind)
		search_delim(buf);
	else if (cbuf->start > cbuf->ind)
		search_delim_overflow(buf);
}
