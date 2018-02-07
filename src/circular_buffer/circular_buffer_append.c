#include "circular_buffer.h"

t_cbuffer *circular_buffer_append(size_t size)
{
	t_cbuffer *cbuf;

	cbuf = (t_cbuffer *)malloc(sizeof(t_cbuffer));
	init_circular_buffer(cbuf, size);
	return (cbuf);
}
