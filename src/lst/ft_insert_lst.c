/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwojda <gwojda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:53:54 by gwojda            #+#    #+#             */
/*   Updated: 2017/11/07 15:55:21 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void		ft_insert_lst(t_list **begin_list, t_list *elem,
			int (*cmp)(void *, void *))
{
	t_list *list;

	list = *begin_list;
	if (!list || cmp(list->content, elem->content))
	{
		list = elem;
		list->next = *begin_list;
		*begin_list = list;
	}
	else
		ft_insert_lst(&list->next, elem, cmp);
}
