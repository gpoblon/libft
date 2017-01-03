/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 12:28:32 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/20 17:42:18 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int			ft_isconv(char c)
{
	if (c == 's' || c == 'S' || c == 'p' || c == 'd' || c == 'D' || c == 'i' ||
		c == 'o' || c == 'O' || c == 'u' || c == 'U' || c == 'x' || c == 'X' ||
		c == 'c' || c == 'C' || c == '%' || c == 'b' || c == 'N' || c == 'f' ||
		c == 'F' || c == 'Q' || c == 'I')
		return (1);
	return (0);
}

t_lst		*ft_newlink(t_lst **lst, int len)
{
	while (*lst)
		lst = &(*lst)->next;
	*lst = (t_lst*)malloc(sizeof(**lst));
	(*lst)->s_part = NULL;
	(*lst)->len = len;
	(*lst)->check_null = 0;
	(*lst)->next = NULL;
	return (*lst);
}

void		ft_listdel(t_lst **bgn_lst, t_lst *lst)
{
	t_lst	*lstodel;

	lst = *bgn_lst;
	while (lst)
	{
		lstodel = lst;
		lst = lst->next;
		free(lstodel);
	}
	*bgn_lst = NULL;
}

static int	ft_check_null_char(char *s)
{
	size_t	i;
	char	c;

	c = 0;
	i = 0;
	CHECKPV0(s);
	while (s[i] != -1)
	{
		++i;
	}
	return (i);
}

void		ft_printstr(t_info *i)
{
	char	*s;
	int		s_len;
	int		null_index_marker;
	int		ret;

	s_len = 0;
	ret = 0;
	s = ft_strdup("");
	null_index_marker = -1;
	while (i->lst)
	{
		if ((i->lst->next && i->lst->next->len == -1) || (i->lst->len == -1 &&
																		--ret))
			break ;
		s = ft_joinfree(s, ft_subfree(i->lst->s_part, 0, i->lst->len, F1), FX);
		s_len += i->lst->len;
		if (i->lst->check_null == 1)
			null_index_marker = ft_check_null_char(s);
		i->lst = i->lst->next;
	}
	if (null_index_marker >= 0)
		s[null_index_marker] = '\0';
	ft_putnstr(s, s_len);
	i->printflen = (ret == -1) ? ret : i->printflen;
	free(s);
}
