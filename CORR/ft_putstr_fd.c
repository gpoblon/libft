/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 20:04:14 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/18 16:31:53 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
    while (*s)
        write(fd, s++, 1);
}

int		main(int argc, char **argv, int fd)
{
	fd = open("testfd.txt", O_WRONLY);
	if (fd < 0)
	{
		ft_putstr("Impossible d'ouvrir le fichier testfd.txt\n");
		return(1);
	}
	else
	{
		if (argc <= 1)
			ft_putstr("Aucune modification transmise.\n");
		else
			ft_putstr_fd(argv[1], fd);
		close(fd);
	}
	return (0);
}
