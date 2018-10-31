/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 22:18:22 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:49:18 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void	ft_lstpushback(t_list **begin_list, t_list *elem)
{
	t_list	*list;

	list = *begin_list;
	if (!list)
	{
		list = elem;
		*begin_list = list;
	}
	else
	{
		while (list->next)
			list = list->next;
		list->next = elem;
	}
}
