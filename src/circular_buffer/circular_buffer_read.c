#include "circular_buffer.h"
#include "libft.h"

void	circular_buffer_read(t_cbuffer *cbuf, char **output)
{
	size_t olen;
	size_t len;

	if (!cbuf)
		return ;
	if (cbuf->state == NO_DELIM)
		return ;
	len = (cbuf->dpos < cbuf->start)
		? cbuf->dpos + (cbuf->size - cbuf->start)
		: cbuf->dpos - cbuf->start;
	if (!*output)
		*output = malloc(sizeof(char) * (len + 1));
	olen = ((cbuf->dpos >= cbuf->start) ? cbuf->dpos : cbuf->size) - cbuf->start;
	ft_memcpy(*output, cbuf->buffer + cbuf->start, olen);
	if (!(cbuf->dpos > cbuf->start) && olen < len)
		ft_memcpy(*output + olen, cbuf->buffer, cbuf->dpos);
	(*output)[len] = '\0';
	cbuf->start = (cbuf->dpos < cbuf->size) ? cbuf->dpos + 1 : 0;
	circular_buffer_search_delim(cbuf);
}
