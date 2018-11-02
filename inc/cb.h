/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:22:48 by gwojda            #+#    #+#             */
/*   Updated: 2018/11/02 16:03:18 by gpoblon          ###   ########.fr       */
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

void			ft_cbinit(t_cbuffer *cbuf, size_t size);
t_cbuffer		*ft_cbappend(size_t size);
void			ft_cbdelete(t_cbuffer **cbuf);

void			ft_cbwrite(t_cbuffer *cbuf, char *str);
void			ft_cbread(t_cbuffer *cbuf, char **output);
void			ft_cbclear(t_cbuffer *cbuf);
void			ft_cbfclear(t_cbuffer *cbuf);
size_t			ft_cblen(t_cbuffer *cbuf);

void			ft_cbsearch_delim(t_cbuffer *cbuf);
void			ft_cbset_delim(t_cbuffer *cbuf, char delim);

#endif
