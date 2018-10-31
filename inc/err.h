/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 17:57:54 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 13:31:04 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERR_H
# define ERR_H

#include <stdio.h>

void	ft_usage(char *name, char *explain);
void	ft_exit_fd(const char *message, int fd);
int		ft_err_print(const char *message);
int		ft_err_struct(const char *message, char **err_buf);

#endif
