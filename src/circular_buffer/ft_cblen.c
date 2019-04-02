/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:29:48 by gpoblon           #+#    #+#             */
/*   Updated: 2019/01/07 16:29:50 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cb.h"

size_t	ft_cblen(t_cbuffer *cbuf)
{
	if (!cbuf || cbuf->state == NO_DELIM)
		return (0);
	if (cbuf->start <= cbuf->dpos)
		return (cbuf->dpos - cbuf->start + 1);
	else
		return ((cbuf->size - cbuf->start) + cbuf->dpos);
	return (0);
}
