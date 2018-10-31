/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbclear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:30:37 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/05 14:30:37 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cb.h"

void	ft_cbclear(t_cbuffer *cbuf)
{
	if (!cbuf)
		return ;
	cbuf->start = 0;
	cbuf->ind = 0;
	cbuf->dpos = 0;
	cbuf->delim = '\0';
	cbuf->state = NO_DELIM;
}
