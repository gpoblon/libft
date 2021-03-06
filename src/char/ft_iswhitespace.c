/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 17:24:46 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:47:45 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

int		ft_iswhitespace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}
