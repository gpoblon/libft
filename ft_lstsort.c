/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:49:09 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/23 19:28:33 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cmp(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list)
	{
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
	}
	return (list);
}

void	ft_lstpushback(t_list **begin_list, t_list *elem)
{
	t_list	*lst;

	lst = *begin_list;
	if(lst)
	{
		while (lst->next)
			lst = lst->next;
		lst->next = elem;
	}
	else
	{
		lst = elem;
		*begin_list = lst;
	}
}

void	ft_swaplst(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

t_list	*ft_lstsort(t_list *lst,	int (*cmp)(const void *, const void *))
{
	t_list	*bgn;
	int		sorted;

	bgn = lst;
	sorted = 0;
	while (sorted == 0)
	{
		sorted = 1;
		while (lst->next)
		{
			if (cmp(lst->content, lst->next->content) > 0)
			{
				ft_swaplst(&lst, &(lst->next));
				sorted = 0;
			}
			lst = lst->next;
		}
		lst = bgn;
	}
	return (lst);
}
