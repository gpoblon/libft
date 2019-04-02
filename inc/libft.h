/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 11:52:37 by gpoblon           #+#    #+#             */
/*   Updated: 2019/04/02 16:30:34 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/mman.h>
# include <fcntl.h>
# include <inttypes.h>
# include <limits.h>
# include <stdarg.h>
# include <wchar.h>
# include <stdio.h>
# include <mach-o/loader.h>
# include <mach-o/nlist.h>

# include "char.h"
# include "cb.h"
# include "err.h"
# include "lst.h"
# include "net.h"
# include "ft_math.h"
# include "matrix.h"
# include "mem.h"
# include "print.h"
# include "sstr.h"
# include "str.h"
# include "types.h"
# include "get_next_line.h"

# include "ft_printf.h"

# define BUFF_SIZE 32

# define MSK0				(1 << 0)
# define MSK1				(1 << 1)
# define MSK2				(1 << 2)
# define MSK3				(1 << 3)
# define MSK4				(1 << 4)
# define MSK5				(1 << 5)
# define MSK6				(1 << 6)
# define MSK7				(1 << 7)
# define MSK8				(1 << 8)
# define MSK9				(1 << 9)
# define MSK10				(1 << 10)

#endif
