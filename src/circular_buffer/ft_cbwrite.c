/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbwrite.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:30:16 by gpoblon           #+#    #+#             */
/*   Updated: 2019/01/07 16:30:17 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cb.h"

void	ft_cbwrite(t_cbuffer *cbuf, char *str)
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
		ft_cbsearch_delim(cbuf);
}
