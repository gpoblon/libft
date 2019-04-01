/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_color_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 11:59:13 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:48:47 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	i->lst->s_part = ft_strfsub(i->printstr, 0, i->i, XF);
	i->printflen += i->i + len;
	i->i += n;
	i->printstr = ft_strfsub(i->printstr, i->i,
		ft_strlen(i->printstr) - i->i, F1);
	i->lst = ft_newlink(&(i->bgn_lst), len);
	i->lst->s_part = ft_strdup(color);
	i->i = 0;
}

static void	ft_get_color_2(t_info *i)
{
	if (ft_strncmp("{BE}", i->printstr + i->i, 4) == 0)
		ft_sub_get_color(i, 4, "\033[34m", 5);
	else if (ft_strncmp("{P}", i->printstr + i->i, 3) == 0)
		ft_sub_get_color(i, 3, "\033[35m", 5);
	else if (ft_strncmp("{BC}", i->printstr + i->i, 4) == 0)
		ft_sub_get_color(i, 4, "\033[46m", 5);
	else if (ft_strncmp("{BBK}", i->printstr + i->i, 5) == 0)
		ft_sub_get_color(i, 5, "\033[40m", 5);
	else if (ft_strncmp("{BY}", i->printstr + i->i, 4) == 0)
		ft_sub_get_color(i, 4, "\033[43m", 5);
	else if (ft_strncmp("{BR}", i->printstr + i->i, 4) == 0)
		ft_sub_get_color(i, 4, "\033[41m", 5);
	else if (ft_strncmp("{BW}", i->printstr + i->i, 4) == 0)
		ft_sub_get_color(i, 4, "\033[47m", 5);
	else if (ft_strncmp("{BG}", i->printstr + i->i, 4) == 0)
		ft_sub_get_color(i, 4, "\033[42m", 5);
	else if (ft_strncmp("{BBE}", i->printstr + i->i, 5) == 0)
		ft_sub_get_color(i, 5, "\033[44m", 5);
	else if (ft_strncmp("{BP}", i->printstr + i->i, 4) == 0)
		ft_sub_get_color(i, 4, "\033[45m", 5);
	else if (ft_strncmp("{b}", i->printstr + i->i, 3) == 0)
		ft_sub_get_color(i, 3, "\033[1m", 4);
	else if (ft_strncmp("{u}", i->printstr + i->i, 3) == 0)
		ft_sub_get_color(i, 3, "\033[4m", 4);
}

int			ft_get_color(t_info *i)
{
	int	check;

	check = i->printflen;
	if (ft_strncmp("{E}", i->printstr + i->i, 3) == 0)
		ft_sub_get_color(i, 3, "\033[0m", 4);
	else if (ft_strncmp("{C}", i->printstr + i->i, 3) == 0)
		ft_sub_get_color(i, 3, "\x1b[36m", 5);
	else if (ft_strncmp("{BK}", i->printstr + i->i, 4) == 0)
		ft_sub_get_color(i, 4, "\033[30m", 5);
	else if (ft_strncmp("{Y}", i->printstr + i->i, 3) == 0)
		ft_sub_get_color(i, 3, "\033[33m", 5);
	else if (ft_strncmp("{R}", i->printstr + i->i, 3) == 0)
		ft_sub_get_color(i, 3, "\033[31m", 5);
	else if (ft_strncmp("{W}", i->printstr + i->i, 3) == 0)
		ft_sub_get_color(i, 3, "\033[37m", 5);
	else if (ft_strncmp("{G}", i->printstr + i->i, 3) == 0)
		ft_sub_get_color(i, 3, "\033[32m", 5);
	else
		ft_get_color_2(i);
	if (check == i->printflen)
		return (0);
	else
		return (1);
}
