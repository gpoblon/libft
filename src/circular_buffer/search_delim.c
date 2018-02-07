#include "circular_buffer.h"

// a rendre plus elegant : MAIS JAI LA FLEMME AJD
void circular_buffer_search_delim(t_cbuffer *cbuf)
{
	size_t i;

	if (!cbuf)
		return ;
	i = 0;
	cbuf->state = DELIM;
	cbuf->dpos = 0;
	if (cbuf->start < cbuf->ind)
	{
		while (cbuf->start + i < cbuf->ind) {
			if (cbuf->buffer[cbuf->start + i] == cbuf->delim) {
				cbuf->dpos = cbuf->start + i;
				return ;
			}
			++i;
		}
	}
	else if (cbuf->start > cbuf->ind)
	{
		while (cbuf->start + i < cbuf->size) {
			if (cbuf->buffer[cbuf->start + i] == cbuf->delim) {
				cbuf->dpos = cbuf->start + i;
				return ;
			}
			++i;
		}
		i = 0;
		while (i < cbuf->ind) {
			if (cbuf->buffer[i] == cbuf->delim) {
				cbuf->dpos = i;
				return ;
			}
			++i;
		}
	}
	cbuf->state = NO_DELIM;
}
