/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbfclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:29:41 by gpoblon           #+#    #+#             */
/*   Updated: 2019/01/07 16:29:42 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cb.h"

void	ft_cbfclear(t_cbuffer *cbuf)
{
	if (!cbuf)
		return ;
	ft_cbclear(cbuf);
	free(cbuf->buffer);
	cbuf->buffer = NULL;
	cbuf->size = 0;
}
