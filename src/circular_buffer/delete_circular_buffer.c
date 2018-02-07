#include "circular_buffer.h"

void delete_circular_buffer(t_cbuffer **cbuf)
{
	if (!cbuf || !*cbuf)
		return ;
	circular_buffer_fclear(*cbuf);
	free(*cbuf);
	*cbuf = NULL;
}
