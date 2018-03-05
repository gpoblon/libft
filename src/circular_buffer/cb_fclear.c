/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_fclear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:30:40 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/05 14:39:30 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cb.h"

void	cb_fclear(t_cbuffer *cbuf)
{
	if (!cbuf)
		return ;
	cb_clear(cbuf);
	free(cbuf->buffer);
	cbuf->buffer = NULL;
	cbuf->size = 0;
}
