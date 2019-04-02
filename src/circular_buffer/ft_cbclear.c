/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbclear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:29:30 by gpoblon           #+#    #+#             */
/*   Updated: 2019/01/07 16:29:31 by gpoblon          ###   ########.fr       */
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
