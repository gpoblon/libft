/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:30:34 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/05 14:35:59 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cb.h"

t_cbuffer	*cb_append(size_t size)
{
	t_cbuffer *cbuf;

	cbuf = (t_cbuffer *)malloc(sizeof(t_cbuffer));
	init_cb(cbuf, size);
	return (cbuf);
}
