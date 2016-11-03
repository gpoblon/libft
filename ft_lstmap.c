/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 21:37:33 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 17:19:09 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	// t_list	*new;
	// t_list	*new_lst;
	//
	// new = NULL;
	// new_lst = NULL;
	// while (lst != NULL)
	// {
	// 	if (new == NULL)
	// 	{
	// 		new = f(lst);
	// 		new_lst = new;
	// 	}
	// 	else
	// 	{
	// 		new_lst->next = f(lst);
	// 	}
	// }
	return (f(lst));
}
