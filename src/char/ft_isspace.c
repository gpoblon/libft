/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 13:41:46 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:47:44 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

int		ft_isspace(int c)
{
	if (c == 32)
		return (1);
	return (0);
}
