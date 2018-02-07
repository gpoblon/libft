#include "circular_buffer.h"

int	circular_buffer_write(t_cbuffer *cbuf, char *str)
{
	size_t olen; //len before overflowing the circular buffer
	size_t slen; //str len

	if (!cbuf || !str)
		return -1;
	olen = cbuf->size - cbuf->ind;
	slen = ft_strlen(str);
	if (slen > olen) {
		ft_memcpy(cbuf->buffer + cbuf->ind, str, olen);
		ft_memcpy(cbuf->buffer, str + olen, slen - olen);
		cbuf->ind = slen - olen;
	}
	else {
		ft_memcpy(cbuf->buffer + cbuf->ind, str, slen);
		cbuf->ind += slen;
	}
	if (cbuf->state == NO_DELIM)
		circular_buffer_search_delim(cbuf);
	return 0;
}
