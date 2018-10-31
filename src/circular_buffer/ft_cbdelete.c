/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbdelete.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:31:02 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/30 13:46:35 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cb.h"

void	ft_cbdelete(t_cbuffer **cbuf)
{
	if (!cbuf || !*cbuf)
		return ;
	ft_cbfclear(*cbuf);
	free(*cbuf);
	*cbuf = NULL;
}
