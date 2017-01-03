/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 17:48:15 by gpoblon           #+#    #+#             */
/*   Updated: 2017/01/03 12:16:50 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int			ft_printf(const char *format, ...)
{
	t_info	*info;
	t_rule	*rule;
	va_list	va;
	int		ret;

	ret = -1;
	info = (t_info*)malloc(sizeof(t_info));
	rule = (t_rule*)malloc(sizeof(t_rule));
	info->bgn_lst = NULL;
	info->lst = NULL;
	info->i = 0;
	info->printflen = 0;
	info->wildcard = 0;
	info->arg_double = 0;
	va_start(va, format);
	ft_print_formatted_str(format, info, rule, va);
	ft_printstr(info);
	ret = info->printflen;
	va_end(va);
	free(info->printstr);
	ft_listdel(&(info->bgn_lst), info->lst);
	free(info);
	free(rule);
	return (ret);
}

void		ft_get_rules(const char *s, t_info *info, t_rule *rule, va_list va)
{
	int		breaker;

	breaker = 0;
	*rule = (t_rule){0, 0, 0, -1, 0, 0};
	while (rule->conv == 0)
	{
		breaker = info->i;
		info->i = ft_get_options(s, info->i, rule);
		ft_get_min_w(s, info, rule, va);
		ft_get_prec(s, info, rule, va);
		ft_get_type(s, info, rule);
		ft_get_conversion(s, info, rule, va);
		if (breaker == info->i)
		{
			if (rule->conv == 0)
			{
				if (s[info->i])
					rule->conv = s[info->i++];
				else
					*rule = (t_rule){0, 0, 0, -1, 0, 0};
			}
			break ;
		}
	}
}

void		ft_arg_to_str(t_info *info, t_rule *rule)
{
	info->str_opt = NULL;
	if (rule->conv == 'c' || rule->conv == 'C' || rule->conv == 'S' ||
		rule->conv == 's' || rule->conv == '%')
		ft_char_arg_to_str(info, rule);
	else
		ft_numeral_arg_to_str(info, rule);
}

static void	ft_sub_print_formatted_str(t_info *info, t_rule *rule, va_list va)
{
	if (info->printstr[info->i] == '%')
	{
		info->null_char = 0;
		++info->i;
		ft_get_rules(info->printstr, info, rule, va);
		if (rule->conv != '%' && ft_isconv(rule->conv) && rule->conv != 'f' &&
															rule->conv != 'F')
			info->arg = va_arg(va, void*);
		else if (rule->conv == 'f' || rule->conv == 'F')
		{
			info->arg_double = va_arg(va, double);
		}
		ft_arg_to_str(info, rule);
		if (info->printflen != -1)
		{
			info->printflen += ft_strlen(info->arg_str);
			info->lst = ft_newlink(&(info->bgn_lst),
										ft_strlen(info->arg_str));
		}
		else
			info->lst = ft_newlink(&(info->bgn_lst), -1);
		info->lst->check_null = info->null_char;
		info->lst->s_part = ft_subfree(info->arg_str, 0,
										ft_strlen(info->arg_str), F1);
	}
}

void		ft_print_formatted_str(const char *s, t_info *info, t_rule *rule,
																	va_list va)
{
	int		color_check;

	info->printstr = ft_strdup(s);
	while (info->printstr[info->i])
	{
		info->arg_str = NULL;
		while (info->printstr[info->i] && info->printstr[info->i] != '%')
		{
			color_check = 0;
			if (info->printstr[info->i] == '{')
				color_check = ft_get_color(info);
			if (info->printstr[info->i] && info->printstr[info->i] != '%' &&
															color_check == 0)
				++info->i;
		}
		info->printflen += info->i;
		info->lst = ft_newlink(&(info->bgn_lst), info->i);
		info->lst->s_part = ft_subfree(info->printstr, 0, info->i, XF);
		ft_sub_print_formatted_str(info, rule, va);
		info->printstr = ft_subfree(info->printstr, info->i,
									ft_strlen(info->printstr) - info->i, F1);
		info->i = 0;
		info->color = 0;
	}
	info->lst = info->bgn_lst;
}
