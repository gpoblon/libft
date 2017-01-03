/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rules.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 20:00:41 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/17 12:54:24 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int		ft_get_options(const char *s, int i, t_rule *r)
{
	while (s[i] == '-' || s[i] == '+' || s[i] == ' '
			|| s[i] == '#' || s[i] == '0')
	{
		while (s[i] == '0' && ++i)
			r->flag |= FL_ZERO;
		while (s[i] == '-' && ++i)
			r->flag |= FL_LEFT;
		while (s[i] == '+' && ++i)
			r->flag |= FL_PLUS;
		while (s[i] == ' ' && ++i)
			r->flag |= FL_SPACE;
		while (s[i] == '#' && ++i)
			r->flag |= FL_POUND;
	}
	return (i);
}

void	ft_get_min_w(const char *s, t_info *i, t_rule *r, va_list va)
{
	int		j;

	j = i->i;
	if (s[i->i] == '*' && !(i->wildcard & WC_MIN_W))
	{
		i->wildcard |= WC_MIN_W;
		r->min_w = va_arg(va, int);
		if (r->min_w < 0)
		{
			r->flag |= FL_LEFT;
			r->min_w *= -1;
		}
		++i->i;
	}
	else
	{
		while (ft_isdigit((int)s[i->i]))
			++i->i;
		if (i->i != j)
			r->min_w = ft_atoi(s + j);
	}
}

void	ft_get_prec(const char *s, t_info *i, t_rule *r, va_list va)
{
	int		j;

	while (s[i->i] == '.')
	{
		++i->i;
		r->prec = 0;
		if (s[i->i] == '*' && !(i->wildcard & WC_PREC))
		{
			i->wildcard |= WC_PREC;
			r->prec = va_arg(va, int);
			if (r->prec < 0)
				r->prec = -1;
			++i->i;
		}
		else
		{
			j = i->i;
			while (ft_isdigit((int)s[i->i]))
				++i->i;
			if (i->i != j && s[j] != '-' && s[j] != '.')
				r->prec = ft_atoi(s + j);
		}
	}
}

void	ft_get_type(const char *s, t_info *i, t_rule *r)
{
	while (s[i->i] == 'j' || s[i->i] == 'h' || s[i->i] == 'l' || s[i->i] == 'z')
	{
		if (s[i->i] == 'j' && ++i->i)
			r->modifier = MOD_J;
		else if (s[i->i] == 'l')
		{
			++i->i;
			if (s[i->i] == 'l' && ++i->i && (r->modifier < MOD_J))
				r->modifier = MOD_LL;
			else if (r->modifier < MOD_LL)
				r->modifier = MOD_L;
		}
		else if (s[i->i] == 'z' && ++i->i && (r->modifier < MOD_L))
			r->modifier = MOD_Z;
		else if (s[i->i] == 'h')
		{
			++i->i;
			if (s[i->i] == 'h' && ++i->i && (r->modifier < MOD_H))
				r->modifier = MOD_HH;
			else if (r->modifier < MOD_Z)
				r->modifier = MOD_H;
		}
	}
}

void	ft_get_conversion(const char *s, t_info *i, t_rule *r, va_list va)
{
	if (ft_isconv(s[i->i]))
	{
		if (s[i->i] == 'N')
			ft_base_rule(s, i, r, va);
		else
			r->conv = s[i->i];
		++i->i;
	}
}
