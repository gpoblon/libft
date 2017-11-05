/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 22:15:30 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 14:58:01 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(t_list *list)
{
	t_list	*tmp;

	tmp = NULL;
	CHECKPVN(list);
	tmp = (t_list*)malloc(sizeof(t_list));
	CHECKPVN(tmp);
	tmp->content_size = list->content_size;
	tmp->content = list->content;
	tmp->next = NULL;
	return (tmp);
}
