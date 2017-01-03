/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_options.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 13:56:01 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/20 17:43:41 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

static void	ft_sub_rules_to_int(t_info *i, t_rule *r)
{
	char	*str_prec;
	int		diff_prec;

	i->sign = 0;
	str_prec = NULL;
	if (i->arg_str[0] == '-')
		i->sign = 1;
	diff_prec = r->prec - (ft_strlen(i->arg_str));
	if (diff_prec >= 0)
	{
		if (i->sign == 1)
			i->arg_str = ft_subfree(i->arg_str, 1, ft_strlen(i->arg_str) - 1,
																		F1);
		if (i->sign == 1)
			str_prec = ft_strdup("-");
		else
			str_prec = ft_strdup("");
		str_prec = ft_joinfree(str_prec, ft_strcnew(diff_prec + i->sign, '0'),
																		FX);
		i->arg_str = ft_joinfree(str_prec, i->arg_str, FX);
	}
	if (r->prec == 0 && (int)i->arg == 0)
		i->arg_str = ft_strdup("");
}

static void	ft_sub_apply_rules_to_int(t_info *i)
{
	if (i->sign == 1)
		i->arg_str = ft_subfree(i->arg_str, 1, ft_strlen(i->arg_str) - 1,
																	F1);
	if (i->sign == 1)
		i->str_opt = ft_strdup("-");
	if (!i->str_opt)
		i->str_opt = ft_strdup("");
	i->str_opt = ft_joinfree(i->str_opt, ft_strcnew(i->diff_w, '0'), FX);
}

void		ft_apply_rules_to_int(t_info *i, t_rule *r)
{
	ft_sub_rules_to_int(i, r);
	i->diff_w = r->min_w - ft_strlen(i->arg_str);
	if (!i->sign && (r->flag & FL_SPACE) && !(r->flag & FL_PLUS) && i->diff_w--)
		i->str_opt = ft_strdup(" ");
	else if (!i->sign && (r->flag & FL_PLUS) && i->diff_w--)
		i->str_opt = ft_strdup("+");
	if (i->diff_w > 0 && (r->flag & FL_ZERO) && !(r->flag & FL_LEFT) &&
																r->prec == -1)
		ft_sub_apply_rules_to_int(i);
	if (!i->str_opt)
		i->str_opt = ft_strdup("");
	i->arg_str = ft_joinfree(i->str_opt, i->arg_str, F2);
	if (i->diff_w > 0 && r->flag & FL_LEFT)
		i->arg_str = ft_joinfree(i->arg_str, ft_strcnew(i->diff_w, ' '), FX);
	else if (i->diff_w > 0 && (!(r->flag & FL_ZERO) || ((r->flag & FL_ZERO) &&
																r->prec != -1)))
		i->arg_str = ft_joinfree(ft_strcnew(i->diff_w, ' '), i->arg_str, FX);
	free(i->str_opt);
}

void		ft_apply_rules_to_unsigned_int(t_info *i, t_rule *r)
{
	if (ft_isconv(r->conv))
		ft_sub_rules_to_int(i, r);
	i->diff_w = r->min_w - ft_strlen(i->arg_str);
	if ((r->flag & FL_POUND || r->conv == 'p'))
	{
		if ((r->conv == 'p' || ((int)i->arg && ((r->conv == 'x' ||
										r->conv == 'X')))) && (i->diff_w -= 2))
			i->str_opt = ft_strdup("0x");
		else if ((r->conv == 'o' || r->conv == 'O') && (!(r->prec == -1 &&
				i->arg == 0) && ((r->prec == 0 && ft_strlen(i->arg_str) == 0) ||
				r->prec < (int)ft_strlen(i->arg_str))) && --i->diff_w)
			i->str_opt = ft_strdup("0");
	}
	if (!i->str_opt)
		i->str_opt = ft_strdup("");
	if (i->diff_w > 0 && (r->flag & FL_ZERO) && !(r->flag & FL_LEFT))
		i->str_opt = ft_joinfree(i->str_opt, ft_strcnew(i->diff_w, '0'), FX);
	i->arg_str = ft_joinfree(i->str_opt, i->arg_str, F2);
	if ((i->diff_w > 0 || r->conv == 0) && r->flag & FL_LEFT)
		i->arg_str = ft_joinfree(i->arg_str, ft_strcnew(i->diff_w, ' '), FX);
	else if (i->diff_w > 0 && !(r->flag & FL_ZERO))
		i->arg_str = ft_joinfree(ft_strcnew(i->diff_w, ' '), i->arg_str, FX);
	free(i->str_opt);
	if (r->conv == 'X')
		i->arg_str = ft_str_toupper(i->arg_str);
}

void		ft_apply_rules_to_char(t_info *i, t_rule *r)
{
	i->str_opt = ft_strdup("");
	if (r->prec > 0 && (r->conv == 'c' || r->conv == 'C'))
		i->arg_str = ft_subfree(i->arg_str, 0, r->prec, F1);
	if (r->prec != -1 && r->prec < (int)ft_strlen(i->arg_str) && r->conv == 's')
		i->arg_str = ft_subfree(i->arg_str, 0, r->prec, F1);
	i->diff_w = r->min_w - ft_strlen(i->arg_str);
	if (i->diff_w > 0 && (r->flag & FL_ZERO) && !(r->flag & FL_LEFT))
		i->str_opt = ft_joinfree(i->str_opt, ft_strcnew(i->diff_w, '0'), FX);
	i->arg_str = ft_joinfree(i->str_opt, i->arg_str, F2);
	if (i->diff_w > 0 && r->flag & FL_LEFT)
		i->arg_str = ft_joinfree(i->arg_str, ft_strcnew(i->diff_w, ' '), FX);
	else if (i->diff_w > 0 && !(r->flag & FL_ZERO))
		i->arg_str = ft_joinfree(ft_strcnew(i->diff_w, ' '), i->arg_str, FX);
	free(i->str_opt);
}
