/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 17:56:24 by gpoblon           #+#    #+#             */
/*   Updated: 2019/04/02 16:22:07 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H
# define LST_H

# include <unistd.h>
# include <stdlib.h>
# include "mem.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_insert_lst(t_list **begin_list, t_list *elem,
					int (*cmp)(void *, void *));
void				ft_lstswap(t_list *elem);
void				ft_lstadd(t_list **alst, t_list *new);
t_list				*ft_lstcpy(t_list *list);
void				ft_lstdel_content(void *content, size_t content_size);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstdup(t_list *list);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstpushback(t_list **begin_list, t_list *elem);
size_t				ft_lstsize(t_list *list);
void				ft_lstcfree(void *ptr, size_t size);
void				ft_lstdelif(t_list **alst, void *data_ref,
					int (*cmp)(), void (*del)(void *, size_t));

t_list				*ft_push(t_list **stack, int elem);
int					ft_pop(t_list **lst);
int					ft_top(t_list *top);

#endif
