/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:18:47 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/23 19:27:29 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef	struct		s_list
{
	int				n;
	struct s_list	*next;
}					t_list;

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*next;
	t_list	*prev;

	tmp = *begin_list;
	next = 0;
	prev = 0;
	printf ("%p %p %p\n", prev, tmp, next);
	while (tmp)
	{
		next = tmp->next;
		tmp->next = prev;
		prev = tmp;
		tmp = next;
		printf ("%p %p %p\n", prev, tmp, next);
	}
	*begin_list = prev;
}

void	ft_pushfront(t_list **list, int i)
{
	t_list *n_list;

	n_list = (t_list *)malloc(sizeof(int));
	if (n_list)
	{
		n_list->n = i;
		n_list->next = *list;
		*list = n_list;
	}
}
