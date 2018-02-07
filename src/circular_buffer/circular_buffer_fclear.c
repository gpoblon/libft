#include "circular_buffer.h"

void circular_buffer_fclear(t_cbuffer *cbuf)
{
	if (!cbuf)
		return ;
	circular_buffer_clear(cbuf);
	free(cbuf->buffer);
	cbuf->buffer = NULL;
	cbuf->size = 0;
}
