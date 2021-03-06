/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 11:09:06 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/30 13:36:05 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_lstpush_back_gnl(t_gnllst **begin_list, int fd)
{
	t_gnllst	*list;
	t_gnllst	*list2;

	list = *begin_list;
	list2 = (t_gnllst *)malloc(sizeof(t_gnllst));
	if (!list2)
		return ;
	list2->fd = fd;
	list2->content = NULL;
	list2->next = NULL;
	if (!list)
	{
		list = list2;
		*begin_list = list;
	}
	else
	{
		while (list->next)
			list = list->next;
		list->next = list2;
	}
}
