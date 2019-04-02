/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbappend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:29:23 by gpoblon           #+#    #+#             */
/*   Updated: 2019/01/07 16:29:25 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cb.h"

t_cbuffer	*ft_cbappend(size_t size)
{
	t_cbuffer *cbuf;

	cbuf = (t_cbuffer *)malloc(sizeof(t_cbuffer));
	ft_cbinit(cbuf, size);
	return (cbuf);
}
