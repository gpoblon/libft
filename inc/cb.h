/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:22:48 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/05 14:27:44 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CB_H
# define CB_H

# include "mem.h"
# include "str.h"
# include <unistd.h>
# include <stdlib.h>

/*
**	buffer = our circular buffer
**	size = buffer size
**	start = start index for data
**	ind = index to write
*/

enum			e_cbuffer
{
	NO_DELIM,
	DELIM
};

typedef struct	s_cbuffer
{
	char			*buffer;
	size_t			size;
	size_t			start;
	size_t			ind;

	size_t			dpos;
	char			delim;
	enum e_cbuffer	state;
}				t_cbuffer;

void			init_cb(t_cbuffer *cbuf, size_t size);
t_cbuffer		*cb_append(size_t size);
void			delete_cb(t_cbuffer **cbuf);

void			cb_write(t_cbuffer *cbuf, char *str);
void			cb_read(t_cbuffer *cbuf, char **output);
void			cb_clear(t_cbuffer *cbuf);
void			cb_fclear(t_cbuffer *cbuf);
size_t			cb_len(t_cbuffer *cbuf);

void			cb_search_delim(t_cbuffer *cbuf);
void			cb_set_delim(t_cbuffer *cbuf, char delim);

#endif
