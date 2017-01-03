/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:57:52 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/11 18:35:13 by gpoblon          ###   ########.fr       */
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

#endif
