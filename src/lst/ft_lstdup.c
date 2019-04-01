/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 22:15:30 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:49:14 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

t_list	*ft_lstdup(t_list *list)
{
	t_list	*tmp;

	tmp = NULL;
	if (!list)
		return (NULL);
	tmp = (t_list*)malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	tmp->content_size = list->content_size;
	tmp->content = list->content;
	tmp->next = NULL;
	return (tmp);
}
