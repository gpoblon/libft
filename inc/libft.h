/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 11:52:37 by gpoblon           #+#    #+#             */
/*   Updated: 2018/03/16 17:46:32 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <inttypes.h>
# include <limits.h>
# include <stdarg.h>
# include <wchar.h>
# include <stdio.h>

# include "char.h"
# include "cb.h"
# include "err.h"
# include "lst.h"
# include "net.h"
# include "ftmath.h"
# include "matrix.h"
# include "mem.h"
# include "printing.h"
# include "sstr.h"
# include "str.h"
# include "get_next_line.h"

# include "ft_printf.h"

# define TRUE 1
# define FALSE 0

# define BUFF_SIZE 32

# define F_N		    (1 << 0)
# define F_1		    (1 << 1)
# define F_2		    (1 << 2)
# define F_A		    (1 << 3)

# define MSK0			(1 << 0)
# define MSK1			(1 << 1)
# define MSK2			(1 << 2)
# define MSK3			(1 << 3)
# define MSK4			(1 << 4)
# define MSK5			(1 << 5)
# define MSK6			(1 << 6)
# define MSK7			(1 << 7)
# define MSK8			(1 << 8)
# define MSK9			(1 << 9)
# define MSK10			(1 << 10)

typedef int				t_bmask;
typedef int				t_bool;
typedef unsigned char	t_uchar;

#endif
