#include "circular_buffer.h"

void circular_buffer_clear(t_cbuffer *cbuf)
{
	if (!cbuf)
		return ;
	cbuf->start = 0;
	cbuf->ind = 0;
	cbuf->dpos = 0;
	cbuf->delim = '\0';
	cbuf->state = NO_DELIM;
}
