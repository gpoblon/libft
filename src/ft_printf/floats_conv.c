/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floats_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 12:06:23 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:48:47 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_apply_rules_to_float(t_info *i, t_rule *r, char *s)
{
	i->sign = 0;
	i->diff_w = r->min_w - ft_strlen(s);
	if (s[0] == '-' && --i->diff_w)
	{
		i->sign = 1;
		s = ft_strfsub(s, 1, ft_strlen(s) - 1, F1);
		i->str_opt = ft_strdup("-");
	}
	else if (!i->sign && r->flag & FL_SPACE && !(r->flag & FL_PLUS) &&
																i->diff_w--)
		i->str_opt = ft_strdup(" ");
	else if (!i->sign && r->flag & FL_PLUS && i->diff_w--)
		i->str_opt = ft_strdup("+");
	else
		i->str_opt = ft_strdup("");
	if (i->diff_w > 0 && r->flag & FL_LEFT)
		s = ft_strfjoin(s, ft_strcnew(i->diff_w, ' '), FX);
	else if (i->diff_w > 0 && !(r->flag & FL_ZERO) && !i->sign)
		s = ft_strfjoin(ft_strcnew(i->diff_w, ' '), s, FX);
	else if (i->diff_w > 0 && r->flag & FL_ZERO)
		s = ft_strfjoin(ft_strcnew(i->diff_w, '0'), s, FX);
	s = ft_strfjoin(i->str_opt, s, FX);
	if (i->diff_w > 0 && !(r->flag & FL_ZERO) && i->sign == 1)
		s = ft_strfjoin(ft_strcnew(i->diff_w, ' '), s, FX);
	return (s);
}

static void	ft_float_to_str(t_info *info, t_rule *rule, t_float *floats)
{
	floats->s_dec = ft_strnew(rule->prec);
	while (++floats->i <= rule->prec)
	{
		floats->whole = info->arg_double;
		info->arg_double = info->arg_double - floats->whole;
		info->arg_double *= 10;
		floats->s_dec[floats->i] = floats->whole + '0';
		if (floats->i == rule->prec)
		{
			floats->s_dec[floats->i] = '\0';
			if (floats->whole >= 5 && floats->whole < 9)
				++floats->s_dec[--floats->i];
			else if (floats->whole == 9 && --floats->i)
			{
				while (floats->whole == 9)
				{
					floats->s_dec[floats->i] = '0';
					--floats->i;
					floats->whole = floats->s_dec[floats->i] - '0';
				}
				++floats->s_dec[floats->i];
			}
			break ;
		}
	}
}

char		*ft_float_conv(t_info *info, t_rule *rule)
{
	t_float	floats;

	floats = (t_float){NULL, NULL, NULL, 0, -1};
	rule->prec = (rule->prec == -1) ? 6 : rule->prec;
	floats.s_whole = (info->arg_double < 0) ? ft_strdup("-") : ft_strdup("");
	if (info->arg_double < 0)
		info->arg_double *= -1;
	floats.whole = info->arg_double;
	floats.s_whole = ft_strfjoin(floats.s_whole,
										ft_itoa_base(floats.whole, 10), FX);
	if (rule->prec > 0)
	{
		info->arg_double = info->arg_double - floats.whole;
		info->arg_double *= 10;
		ft_float_to_str(info, rule, &floats);
		floats.s_full = ft_strfjoin(floats.s_whole, ".", F1);
		floats.s_full = ft_strfjoin(floats.s_full, floats.s_dec, FX);
	}
	else if (rule->prec == 0 && (rule->flag & FL_POUND))
		floats.s_full = ft_strfjoin(floats.s_whole, ".", F1);
	else
		floats.s_full = ft_strdup(floats.s_whole);
	floats.s_full = ft_apply_rules_to_float(info, rule, floats.s_full);
	return (floats.s_full);
}
