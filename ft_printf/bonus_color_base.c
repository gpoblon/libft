/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_color_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 11:59:13 by gpoblon           #+#    #+#             */
/*   Updated: 2017/01/03 12:13:51 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

void		ft_base_rule(const char *s, t_info *info, t_rule *rule, va_list va)
{
	rule->base = 10;
	if (s[info->i] == 'N' && !(info->wildcard & WC_BASE))
	{
		rule->conv = 'N';
		info->wildcard |= WC_BASE;
		rule->base = va_arg(va, int);
		if (rule->base < 2 || rule->base > 36)
			rule->base = 10;
	}
}

static void	ft_sub_get_color(t_info *i, int n, char *color, int len)
{
	i->lst = ft_newlink(&(i->bgn_lst), i->i);
	i->lst->s_part = ft_subfree(i->printstr, 0, i->i, XF);
	i->printflen += i->i + len;
	i->i += n;
	i->printstr = ft_subfree(i->printstr, i->i, ft_strlen(i->printstr) - i->i,
																		F1);
	i->lst = ft_newlink(&(i->bgn_lst), len);
	i->lst->s_part = ft_strdup(color);
	i->i = 0;
}

static void	ft_get_color_2(t_info *i)
{
	if (ft_strncmp("{blue}", i->printstr + i->i, 6) == 0)
		ft_sub_get_color(i, 6, "\033[34m", 5);
	else if (ft_strncmp("{purple}", i->printstr + i->i, 8) == 0)
		ft_sub_get_color(i, 8, "\033[35m", 5);
	else if (ft_strncmp("{BGcyan}", i->printstr + i->i, 8) == 0)
		ft_sub_get_color(i, 8, "\033[46m", 5);
	else if (ft_strncmp("{BGblack}", i->printstr + i->i, 9) == 0)
		ft_sub_get_color(i, 9, "\033[40m", 5);
	else if (ft_strncmp("{BGyellow}", i->printstr + i->i, 10) == 0)
		ft_sub_get_color(i, 10, "\033[43m", 5);
	else if (ft_strncmp("{BGred}", i->printstr + i->i, 7) == 0)
		ft_sub_get_color(i, 7, "\033[41m", 5);
	else if (ft_strncmp("{BGwhite}", i->printstr + i->i, 9) == 0)
		ft_sub_get_color(i, 9, "\033[47m", 5);
	else if (ft_strncmp("{BGgreen}", i->printstr + i->i, 9) == 0)
		ft_sub_get_color(i, 9, "\033[42m", 5);
	else if (ft_strncmp("{BGblue}", i->printstr + i->i, 8) == 0)
		ft_sub_get_color(i, 8, "\033[44m", 5);
	else if (ft_strncmp("{BGpurple}", i->printstr + i->i, 10) == 0)
		ft_sub_get_color(i, 10, "\033[45m", 5);
	else if (ft_strncmp("{bold}", i->printstr + i->i, 6) == 0)
		ft_sub_get_color(i, 6, "\033[1m", 4);
	else if (ft_strncmp("{underline}", i->printstr + i->i, 11) == 0)
		ft_sub_get_color(i, 11, "\033[4m", 4);
}

int			ft_get_color(t_info *i)
{
	int	check;

	check = i->printflen;
	if (ft_strncmp("{eoc}", i->printstr + i->i, 5) == 0)
		ft_sub_get_color(i, 5, "\033[0m", 4);
	else if (ft_strncmp("{cyan}", i->printstr + i->i, 6) == 0)
		ft_sub_get_color(i, 6, "\x1b[36m", 5);
	else if (ft_strncmp("{black}", i->printstr + i->i, 7) == 0)
		ft_sub_get_color(i, 7, "\033[30m", 5);
	else if (ft_strncmp("{yellow}", i->printstr + i->i, 8) == 0)
		ft_sub_get_color(i, 8, "\033[33m", 5);
	else if (ft_strncmp("{red}", i->printstr + i->i, 5) == 0)
		ft_sub_get_color(i, 5, "\033[31m", 5);
	else if (ft_strncmp("{white}", i->printstr + i->i, 7) == 0)
		ft_sub_get_color(i, 7, "\033[37m", 5);
	else if (ft_strncmp("{green}", i->printstr + i->i, 7) == 0)
		ft_sub_get_color(i, 7, "\033[32m", 5);
	else
		ft_get_color_2(i);
	if (check == i->printflen)
		return (0);
	else
		return (1);
}
