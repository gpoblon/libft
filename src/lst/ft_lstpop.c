/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:09:56 by jhalford          #+#    #+#             */
/*   Updated: 2018/10/31 11:49:16 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

int		ft_lstpop(t_list **lst)
{
	t_list	*top;
	int		item;

	top = *lst;
	item = top ? *(int*)top->content : 0;
	if (lst && *lst)
		*lst = (*lst)->next;
	ft_lstdelone(&top, ft_lstcfree);
	return (item);
}
