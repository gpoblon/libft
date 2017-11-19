/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 12:37:21 by gpoblon           #+#    #+#             */
/*   Updated: 2017/04/30 14:47:30 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_swap(t_list *elem)
{
	t_list	*tmp;

	tmp = elem;
	elem = elem->next;
	elem->next = tmp;
}