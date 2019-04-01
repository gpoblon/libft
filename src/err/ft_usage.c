/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:33:05 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 11:57:11 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "err.h"
#include "print.h"

void	ft_usage(char *name, char *explain)
{
	ft_putstr_fd("Usage: ", 2);
	ft_putstr_fd(name, 2);
	ft_putstr_fd(explain, 2);
	ft_putstr_fd("\n", 2);
}
