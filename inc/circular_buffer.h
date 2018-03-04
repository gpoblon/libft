#ifndef CIRCULAR_BUFFER_H
# define CIRCULAR_BUFFER_H

# include "mem.h"
# include "str.h"
# include <unistd.h>
# include <stdlib.h>

/*
* buffer = our circular buffer
* size = buffer size
* start = start index for data
* ind = index to write
*/

enum e_cbuffer
{
	NO_DELIM,
	DELIM
};

typedef struct s_cbuffer
{
	char		*buffer;
	size_t		size;
	size_t		start;
	size_t		ind;

	size_t		dpos;
	char		delim;
	enum e_cbuffer	state;
}				t_cbuffer;

/*
* how to use :
*/

void init_circular_buffer(t_cbuffer *cbuf, size_t size);
t_cbuffer *circular_buffer_append(size_t size);
void delete_circular_buffer(t_cbuffer **cbuf);

void	circular_buffer_write(t_cbuffer *cbuf, char *str);
void	circular_buffer_read(t_cbuffer *cbuf, char **output);
char	*get_circular_buffer(t_cbuffer *cbuf);
void circular_buffer_clear(t_cbuffer *cbuf);
void circular_buffer_fclear(t_cbuffer *cbuf);
size_t	circular_buffer_len(t_cbuffer *cbuf);

void circular_buffer_search_delim(t_cbuffer *cbuf);
void circular_buffer_set_delim(t_cbuffer *cbuf, char delim);

#endif
