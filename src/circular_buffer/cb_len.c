/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:30:46 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/05 14:32:19 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cb.h"

size_t	cb_len(t_cbuffer *cbuf)
{
	if (!cbuf || cbuf->state == NO_DELIM)
		return (0);
	if (cbuf->start <= cbuf->dpos)
		return (cbuf->dpos - cbuf->start + 1);
	else
		return ((cbuf->size - cbuf->start) + cbuf->dpos);
	return (0);
}
