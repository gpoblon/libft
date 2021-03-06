/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbread.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:29:56 by gpoblon           #+#    #+#             */
/*   Updated: 2019/01/07 16:29:56 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cb.h"

void	ft_cbread(t_cbuffer *cbuf, char **output)
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
	olen = ((cbuf->dpos >= cbuf->start) ? cbuf->dpos :
			cbuf->size) - cbuf->start;
	ft_memcpy(*output, cbuf->buffer + cbuf->start, olen);
	if (!(cbuf->dpos > cbuf->start) && olen < len)
		ft_memcpy(*output + olen, cbuf->buffer, cbuf->dpos);
	(*output)[len] = '\0';
	cbuf->start = (cbuf->dpos < cbuf->size) ? cbuf->dpos + 1 : 0;
	ft_cbsearch_delim(cbuf);
}
