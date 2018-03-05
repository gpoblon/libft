/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:33:05 by gwojda            #+#    #+#             */
/*   Updated: 2018/03/05 14:33:06 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_usage(char *name, char *explain)
{
	ft_putstr_fd("Usage: ", 2);
	ft_putstr_fd(name, 2);
	ft_putstr_fd(explain, 2);
	ft_putstr_fd("\n", 2);
}
