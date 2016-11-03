/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 22:14:34 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 14:57:02 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstcpy(t_list *list)
{
	t_list	*tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	CHECKPVN(tmp);
	tmp->content_size = list->content_size;
	tmp->content = list->content;
	tmp->next = NULL;
	return (tmp);
}
