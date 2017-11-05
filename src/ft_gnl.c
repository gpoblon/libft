/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:40:44 by gpoblon           #+#    #+#             */
/*   Updated: 2017/01/18 15:07:53 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check_leftover(char **leftover, char **line, int i)
{
	if (*leftover)
	{
		while ((*leftover)[i] && (*leftover)[i] != '\n')
			i++;
		*line = ft_strjoin_free(*line,
				ft_strsub_free(*leftover, 0, i, NO_FREE), FREE_ALL);
		if ((size_t)i < ft_strlen(*leftover))
		{
			*leftover = ft_strsub_free(*leftover, i + 1,
							ft_strlen(*leftover) - i, FREE_P1);
			return (1);
		}
		else
			free(*leftover);
	}
	return (0);
}

static int		ft_read_fd(char **leftover, char **line, char *buff, int fd)
{
	int		reader;
	int		i;

	while ((reader = read(fd, buff, BUFF_SIZE)))
	{
		if (reader < 0)
			return (-1);
		i = 0;
		buff[reader] = '\0';
		while (i < reader && buff[i] != '\n')
			i++;
		if (buff[i] == '\n')
		{
			*leftover = ft_strsub_free(buff, i + 1, reader - (i + 1), NO_FREE);
			*line = ft_strjoin_free(*line, ft_strsub_free(buff, 0, i, 0), FREE_ALL);
			return (1);
		}
		else
			*line = ft_strjoin_free(*line, buff, FREE_P1);
	}
	if (*line[0] != 0)
		return (1);
	free(*line);
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static char	*leftover = NULL;
	char		buff[BUFF_SIZE + 1];
	int			i;

	i = 0;
	if (!line || fd < 0)
		return (-1);
	*line = ft_strdup("");
	if (ft_check_leftover(&leftover, line, i) == 1)
		return (1);
	return (ft_read_fd(&leftover, line, buff, fd));
}
