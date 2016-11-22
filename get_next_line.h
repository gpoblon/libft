/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:57:52 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/22 23:53:04 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"

# define BUFF_SIZE	32

typedef struct		s_fd
{
	int				fd;
	int				reader;
	char			*leftover;
	struct s_fd		*next;
}					t_fd;

int					ft_get_next_line(const int fd, char **line);
t_fd				*ft_manage_fd(t_fd **bgn_list, int fd);
int					ft_check_leftover(t_fd *cur_fd, char **line, int i);
int					ft_read_fd(t_fd *cur_fd, char **line, char *buff, int i);
char				*ft_manage_leftover(char *line, t_fd *cur_fd, char *buff,
					int i);

#endif
