/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 22:18:22 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/07 15:50:10 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
