#include "circular_buffer.h"

void circular_buffer_set_delim(t_cbuffer *cbuf, char delim)
{
	cbuf->delim = delim;
}
