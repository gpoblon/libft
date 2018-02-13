#include "circular_buffer.h"

void init_circular_buffer(t_cbuffer *cbuf, size_t size)
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
