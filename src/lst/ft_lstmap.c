/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 21:37:33 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:49:15 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*tmplst;
	size_t	check;

	list = NULL;
	tmplst = NULL;
	check = 0;
	if (!(f && lst))
		return (NULL);
	while (lst)
	{
		tmplst = f(lst);
		ft_lstpushback(&list, ft_lstnew(tmplst->content, tmplst->content_size));
		if (!list || check == ft_lstsize(list))
			return (NULL);
		else
			check = ft_lstsize(list);
		lst = lst->next;
	}
	return (list);
}
