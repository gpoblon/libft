/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:30:59 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/05 14:52:17 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	cb_write(t_cbuffer *cbuf, char *str)
{
	size_t olen;
	size_t slen;

	if (!cbuf || !str)
		return ;
	olen = cbuf->size - cbuf->ind;
	slen = (ft_strlen(str) > cbuf->size) ? cbuf->size : ft_strlen(str);
	if (slen > olen)
	{
		ft_memcpy(cbuf->buffer + cbuf->ind, str, olen);
		ft_memcpy(cbuf->buffer, str + olen, slen - olen);
		cbuf->ind = slen - olen;
	}
	else
	{
		ft_memcpy(cbuf->buffer + cbuf->ind, str, slen);
		cbuf->ind += slen;
	}
	if (cbuf->state == NO_DELIM)
		cb_search_delim(cbuf);
}
