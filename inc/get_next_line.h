/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 13:09:06 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/30 13:36:05 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <libft.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define GNL_BUFF_SIZE 42

typedef struct	s_gnllst
{
	char			*content;
	int				fd;
	struct s_gnllst	*next;
}				t_gnllst;

void			ft_lstpush_back_gnl(t_gnllst **begin_list, int fd);
int				get_next_line(int const fd, char **line);

#endif
