/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:40:44 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/11 19:00:37 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_fd		*ft_manage_fd(t_fd **list, int fd)
{
	while (*list && (*list)->fd != fd)
		list = &(*list)->next;
	if (*list)
		return (*list);
	*list = (t_fd *)malloc(sizeof(**list));
	(*list)->fd = fd;
	(*list)->leftover = NULL;
	(*list)->next = NULL;
	return (*list);
}

static int		ft_check_leftover(t_fd *cur_fd, char **line, int i)
{
	if (cur_fd->leftover)
	{
		while (cur_fd->leftover[i] && cur_fd->leftover[i] != '\n')
			i++;
		*line = ft_joinfree(*line, ft_subfree(cur_fd->leftover, 0, i, NO_FREE),
																	FREE_ALL);
		if ((size_t)i < ft_strlen(cur_fd->leftover))
		{
			cur_fd->leftover = ft_subfree(cur_fd->leftover, i + 1,
							ft_strlen(cur_fd->leftover) - i, FREE_P1);
			return (1);
		}
		else
			cur_fd->leftover = NULL;
	}
	return (0);
}

static char		*ft_manage_leftover(char *line, t_fd *cur_fd, char *buff, int i)
{
	if (!cur_fd->leftover && i != cur_fd->reader)
	{
		cur_fd->leftover = ft_subfree(buff, i + 1, cur_fd->reader - (i + 1),
																	FREE_P1);
		line = ft_joinfree(line, ft_subfree(buff, 0, i, NO_FREE), FREE_ALL);
	}
	else
	{
		line = ft_joinfree(cur_fd->leftover, ft_subfree(buff, 0, i, NO_FREE),
																	FREE_P2);
		cur_fd->leftover = ft_subfree(buff, i + 1, cur_fd->reader - (i + 1),
																	FREE_P1);
	}
	return (line);
}

static int		ft_read_fd(t_fd *cur_fd, char **line, char *buff, int i)
{
	while ((cur_fd->reader = read(cur_fd->fd, buff, BUFF_SIZE)))
	{
		if (cur_fd->reader < 0)
			return (-1);
		i = 0;
		buff[cur_fd->reader] = '\0';
		while (i < cur_fd->reader && buff[i] != '\n')
			i++;
		if (buff[i] == '\n')
		{
			*line = ft_manage_leftover(*line, cur_fd, buff, i);
			return (1);
		}
		else
			*line = ft_joinfree(*line, buff, FREE_P1);
	}
	if (*line[0] != 0)
		return (1);
	return (0);
}

int				ft_get_next_line(const int fd, char **line)
{
	static t_fd	*bgn_list = NULL;
	t_fd		*cur_fd;
	char		buff[BUFF_SIZE + 1];
	int			i;

	i = 0;
	if (!line || fd < 0)
		return (-1);
	cur_fd = ft_manage_fd(&bgn_list, fd);
	*line = ft_strdup("");
	if (ft_check_leftover(cur_fd, line, i) == 1)
		return (1);
	return (ft_read_fd(cur_fd, line, buff, i));
}
