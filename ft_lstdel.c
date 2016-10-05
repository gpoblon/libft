/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 21:37:38 by gpoblon           #+#    #+#             */
/*   Updated: 2016/10/05 21:20:41 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*listodel;

	list = *alst;
	while (list)
	{
		listtodel = list;
		list = list->next;
		ft_lstdelone(&listodel, del);
	}
	ft_lstdelone(&listodel, del);
	*alst = NULL;
}
