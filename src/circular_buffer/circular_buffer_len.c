#include "circular_buffer.h"

size_t	circular_buffer_len(t_cbuffer *cbuf)
{
	if (!cbuf)
		return 0;
	if (cbuf->start <= cbuf->dpos)
		return (cbuf->dpos - cbuf->start);
	else
		return ((cbuf->size - cbuf->start) + cbuf->dpos);
	return 0;
}
