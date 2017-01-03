/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 18:55:28 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/21 16:49:48 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

static long long	ft_conv_signed(void *arg, t_rule *rule)
{
	long long	n;

	n = (long long)arg;
	if ((rule->modifier & MOD_L || rule->conv == 'D') && rule->conv != 'f')
		n = (long)n;
	else if (rule->modifier & MOD_H)
		n = (short)n;
	else if (rule->modifier & MOD_HH)
		n = (char)n;
	else if (rule->modifier & MOD_LL)
		n = (long long)n;
	else if (rule->modifier & MOD_J)
		n = (intmax_t)n;
	else if (rule->modifier & MOD_Z)
		n = (size_t)n;
	else
		n = (int)n;
	return (n);
}

static t_ullong		ft_conv_unsigned(void *arg, t_rule *rule)
{
	t_ullong	n;

	n = (t_ullong)arg;
	if (rule->modifier & MOD_L || rule->conv == 'U' || rule->conv == 'p' ||
															rule->conv == 'O')
		n = (t_ulong)n;
	else if (rule->modifier & MOD_H)
		n = (t_ushort)n;
	else if (rule->modifier & MOD_HH)
		n = (t_uchar)n;
	else if (rule->modifier & MOD_LL)
		n = (t_ullong)n;
	else if (rule->modifier & MOD_J)
		n = (uintmax_t)n;
	else if (rule->modifier & MOD_Z)
		n = (ssize_t)n;
	else
		n = (t_uint)n;
	return (n);
}

static void			ft_wide_char_to_str(t_info *i, t_rule *r)
{
	int		len;
	int		k;
	int		j;

	len = 0;
	k = -1;
	j = 0;
	if (r->conv == 'C' || r->conv == 'c')
	{
		i->arg_str = ft_strnew(ft_count_wchar((wchar_t)i->arg) + 1);
		ft_compute_wchar((wchar_t)i->arg, i->arg_str, i);
	}
	if (r->conv == 'S' || r->conv == 's')
	{
		while (((wchar_t*)i->arg)[++k])
			len += ft_count_wchar(((wchar_t*)i->arg)[k]);
		k = -1;
		i->arg_str = ft_strnew(len + 1);
		while ((r->prec == -1 || j <= r->prec) && ((wchar_t*)i->arg)[++k])
		{
			len = ft_compute_wchar(((wchar_t*)i->arg)[k], i->arg_str + j, i);
			if ((j += len) > r->prec && r->prec != -1)
				i->arg_str = ft_subfree(i->arg_str, 0, j - len, F1);
		}
	}
}

void				ft_char_arg_to_str(t_info *i, t_rule *r)
{
	if ((r->conv == 'C' || r->conv == 'c') && !i->arg && ++i->null_char)
		i->arg_str = ft_strcnew(1, -1);
	else if (r->conv == 'c' && !(r->modifier & MOD_L))
		i->arg_str = ft_strcnew(1, (char)i->arg);
	else if (r->conv == 'C' || ((r->modifier & MOD_L) &&
														r->conv == 'c'))
		ft_wide_char_to_str(i, r);
	else if (r->conv == 'S' || ((r->modifier & MOD_L) &&
														r->conv == 's'))
	{
		if (!i->arg)
			i->arg_str = ft_strdup("(null)");
		else
			ft_wide_char_to_str(i, r);
	}
	else if (r->conv == 's' && !(r->modifier & MOD_L))
	{
		if (!i->arg)
			i->arg_str = ft_strdup("(null)");
		else
			i->arg_str = ft_strdup((char*)i->arg);
	}
	else if (r->conv == '%')
		i->arg_str = ft_strdup("%");
	ft_apply_rules_to_char(i, r);
}

void				ft_numeral_arg_to_str(t_info *info, t_rule *rule)
{
	if (rule->conv == 'd' || rule->conv == 'i' || rule->conv == 'D')
	{
		info->arg = (void*)ft_conv_signed(info->arg, rule);
		info->arg_str = ft_itoa_base((long long)info->arg, 10);
		ft_apply_rules_to_int(info, rule);
	}
	else if (rule->conv == 'f' || rule->conv == 'F')
		info->arg_str = ft_floats_conv(info, rule);
	else
	{
		info->arg = (void*)ft_conv_unsigned(info->arg, rule);
		if (rule->conv == 'u' || rule->conv == 'U')
			info->arg_str = ft_itoa_base_llu((t_ullong)info->arg, 10);
		else if (rule->conv == 'o' || rule->conv == 'O')
			info->arg_str = ft_itoa_base_llu((t_ullong)info->arg, 8);
		else if (rule->conv == 'x' || rule->conv == 'p' || rule->conv == 'X')
			info->arg_str = ft_itoa_base_llu((t_ullong)info->arg, 16);
		else if (rule->conv == 'b')
			info->arg_str = ft_itoa_base_llu((t_ullong)info->arg, 2);
		else if (rule->conv == 'N')
			info->arg_str = ft_itoa_base_llu((t_ullong)info->arg, rule->base);
		else
			info->arg_str = ft_strcnew(1, rule->conv);
		ft_apply_rules_to_unsigned_int(info, rule);
	}
}
