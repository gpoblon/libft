/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 17:56:00 by gpoblon           #+#    #+#             */
/*   Updated: 2017/10/22 18:35:40 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTING_H
# define PRINTING_H

void    ft_putchar_fd(char c, int fd);
void    ft_putchar(char c);
void    ft_putendl_fd(char const *s, int fd);
void    ft_putendl(char const *s);
void    ft_putnbr_fd(int n, int fd);
void    ft_putnbr(int n);
void    ft_putnstr(char const *s, int n);
void    ft_putsstr(char **sstr);
void    ft_putstr_fd(char const *s, int fd);
void    ft_putstr(char const *s);

#endif
