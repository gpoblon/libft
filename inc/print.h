/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 17:56:00 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 12:13:54 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTING_H
# define PRINTING_H

# include <unistd.h>
# include "mem.h"
# include "str.h"

void	ft_putendl_fd(char const *s, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnstr(char const *s, int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl(char const *s);
void	ft_putstr(char const *s);
void	ft_putsstr(char **sstr);
void	ft_putchar(char c);
void	ft_putnbr(int n);

#endif
