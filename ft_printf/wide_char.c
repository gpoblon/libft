/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wide_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:11:42 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/20 17:46:46 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

static int	ft_wchar4(unsigned int nb, char *line)
{
	unsigned char	c;

	c = 0x000000F0 | ((nb << 11) >> 29);
	*line = c;
	++line;
	c = 0x00000080 | ((nb << 14) >> 26);
	*line = c;
	++line;
	c = 0x00000080 | ((nb << 20) >> 26);
	*line = c;
	++line;
	c = 0x00000080 | ((nb << 26) >> 26);
	*line = c;
	++line;
	return (4);
}

static int	ft_wchar3(unsigned int nb, char *line)
{
	unsigned char	c;

	c = 0x000000E0 | ((nb << 16) >> 28);
	*line = c;
	++line;
	c = 0x00000080 | ((nb << 20) >> 26);
	*line = c;
	++line;
	c = 0x00000080 | ((nb << 26) >> 26);
	*line = c;
	++line;
	return (3);
}

static int	ft_wchar2(unsigned int nb, char *line)
{
	unsigned char	c;

	c = 0x000000C0 | ((nb << 21) >> 27);
	*line = c;
	++line;
	c = 0x00000080 | ((nb << 26) >> 26);
	*line = c;
	++line;
	return (2);
}

int			ft_compute_wchar(unsigned int nb, char *line, t_info *info)
{
	unsigned char	c;

	if (nb < 127)
	{
		c = nb;
		*line = c;
		return (1);
	}
	if (nb >= 128 && nb <= 2047)
		return (ft_wchar2(nb, line));
	if ((nb >= 2048 && nb <= 55295) || (nb >= 57344 && nb <= 65535))
		return (ft_wchar3(nb, line));
	if ((nb >= 65536 && nb <= 196607) || (nb >= 917504 && nb <= 1114111))
		return (ft_wchar4(nb, line));
	else
		info->printflen = -1;
	return (0);
}

int			ft_count_wchar(unsigned int nb)
{
	if (nb < 127)
		return (1);
	else if (nb >= 128 && nb <= 2047)
		return (2);
	else if ((nb >= 2048 && nb <= 55295) || (nb >= 57344 && nb <= 65535))
		return (3);
	else if ((nb >= 65536 && nb <= 196607) || (nb >= 917504 && nb <= 1114111))
		return (4);
	return (0);
}
