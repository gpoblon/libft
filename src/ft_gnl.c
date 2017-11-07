/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:40:44 by gpoblon           #+#    #+#             */
/*   Updated: 2017/11/07 15:25:24 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check_leftover(char **leftover, char **line, int i)
{
	if (*leftover)
	{
		while ((*leftover)[i] && (*leftover)[i] != '\n')
			i++;
		*line = ft_strfjoin(*line,
				ft_strfsub(*leftover, 0, i, F_N), F_A);
		if ((size_t)i < ft_strlen(*leftover))
		{
			*leftover = ft_strfsub(*leftover, i + 1,
							ft_strlen(*leftover) - i, F_1);
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
			*leftover = ft_strfsub(buff, i + 1, reader - (i + 1), F_N);
			*line = ft_strfjoin(*line, ft_strfsub(buff, 0, i, 0), F_A);
			return (1);
		}
		else
			*line = ft_strfjoin(*line, buff, F_1);
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
