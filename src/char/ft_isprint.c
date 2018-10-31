/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 13:39:15 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:47:43 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

int		ft_isprint(int c)
{
	if (ft_isspace(c) || ft_isalnum(c) || ft_ispunct(c))
		return (1);
	return (0);
}
