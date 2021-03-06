/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:40:44 by gpoblon           #+#    #+#             */
/*   Updated: 2018/12/18 18:15:01 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_check_buff_2(char **line, char **content, int i)
{
	char	*dup;
	char	*tmp2;

	tmp2 = ft_strsub(*content, 0, i);
	*line = ft_strfjoin(*line, tmp2, F_1);
	free(tmp2);
	dup = ft_strdup(*content + i + 1);
	free(*content);
	*content = dup;
	return (1);
}

int			ft_check_buff(char **line, char **content)
{
	int		i;
	char	*tmp;

	if (!*content)
		return (0);
	i = ft_strlen(*content);
	if ((tmp = ft_strchr(*content, '\n')))
		return (ft_check_buff_2(line, content, tmp - *content));
	else
	{
		*line = ft_strfjoin(*line, *content, F_1);
		ft_strdel(content);
	}
	return (0);
}

static int	ft_reader_2(char **line, t_gnllst *lst, char *buff)
{
	char	*tmp;
	char	*tmp2;
	int		i;

	if ((tmp = ft_strchr(buff, '\n')))
	{
		i = tmp - buff;
		tmp2 = ft_strsub(buff, 0, i);
		*line = ft_strfjoin(*line, tmp2, F_A);
		lst->content = ft_strdup(buff + i + 1);
		return (1);
	}
	else
		*line = ft_strfjoin(*line, buff, F_1);
	return (0);
}

int			ft_reader(char **line, t_gnllst *lst)
{
	int		ret;
	char	buff[GNL_BUFF_SIZE + 1];

	while ((ret = read(lst->fd, buff, GNL_BUFF_SIZE)))
	{
		if (ret == -1)
			return (ret);
		buff[ret] = '\0';
		if (ft_reader_2(line, lst, (char *)buff))
			return (1);
	}
	if (ret == 0 && **line == '\0')
	{
		free(*line);
		return (0);
	}
	else
		return (1);
}

int			get_next_line(int const fd, char **line)
{
	static t_gnllst	*begin_list = NULL;
	t_gnllst		*lst;
	char			tmp;

	if (!line || read(fd, &tmp, 0) == -1 || fd < 0)
		return (-1);
	*line = ft_strdup("");
	lst = begin_list;
	while (lst && lst->fd != fd)
		lst = lst->next;
	if (!lst)
	{
		ft_lstpush_back_gnl(&begin_list, fd);
		lst = begin_list;
		while (lst && lst->fd != fd)
			lst = lst->next;
	}
	else if (ft_check_buff(line, &(lst->content)))
		return (1);
	if (!begin_list)
		begin_list = lst;
	return (ft_reader(line, lst));
}
