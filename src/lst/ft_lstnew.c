/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 21:37:43 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:49:15 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	if (!(list = (t_list *)malloc(sizeof(*list))))
		return (NULL);
	if (content)
	{
		list->content_size = content_size;
		list->content = ft_memalloc(content_size);
		ft_memcpy(list->content, (void *)content, content_size);
	}
	else
	{
		list->content = NULL;
		list->content_size = 0;
	}
	list->next = NULL;
	return (list);
}
