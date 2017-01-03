/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:27:58 by gpoblon           #+#    #+#             */
/*   Updated: 2017/01/03 12:44:30 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

# include "../libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <wchar.h>
# include <limits.h>

# define XF					1 << 0
# define F1					1 << 1
# define F2					1 << 2
# define FX					1 << 3

# define FL_LEFT			1 << 0
# define FL_POUND			1 << 1
# define FL_PLUS			1 << 2
# define FL_SPACE			1 << 3
# define FL_ZERO			1 << 4

# define MOD_J				1 << 5
# define MOD_LL				1 << 4
# define MOD_L				1 << 3
# define MOD_Z				1 << 2
# define MOD_H				1 << 1
# define MOD_HH				1 << 0

# define WC_MIN_W			1 << 0
# define WC_PREC			1 << 1
# define WC_BASE			1 << 2

typedef unsigned char		t_uchar;
typedef unsigned int		t_uint;
typedef unsigned long		t_ulong;
typedef unsigned long long	t_ullong;
typedef unsigned short		t_ushort;

typedef struct				s_lst
{
	char					*s_part;
	int						len;
	int						check_null;
	struct s_lst			*next;
}							t_lst;

typedef struct				s_info
{
	t_lst					*bgn_lst;
	t_lst					*lst;
	void					*arg;
	double					arg_double;
	char					*arg_str;
	char					*str_opt;
	char					*printstr;
	int						printflen;
	int						null_char;
	int						i;
	int						color;
	int						diff_w;
	int						diff_prec;
	size_t					sign;
	int						wildcard;
}							t_info;

typedef struct				s_rules
{
	char					conv;
	int						flag;
	int						min_w;
	int						prec;
	int						modifier;
	int						base;
}							t_rule;

typedef struct				s_floats
{
	char					*s_whole;
	char					*s_dec;
	char					*s_full;
	unsigned long long		whole;
	int						i;
}							t_floats;

int							ft_printf(const char *format, ...);
void						ft_print_formatted_str(const char *s, t_info *info,
													t_rule *rule, va_list va);

void						ft_get_rules(const char *s, t_info *i, t_rule *r,
																	va_list va);
int							ft_get_options(const char *s, int i, t_rule *r);
void						ft_get_min_w(const char *s, t_info *i, t_rule *r,
																	va_list va);
void						ft_get_prec(const char *s, t_info *i, t_rule *r,
																	va_list va);
void						ft_get_type(const char *s, t_info *i, t_rule *r);
void						ft_get_conversion(const char *s, t_info *i,
														t_rule *r, va_list va);

void						ft_arg_to_str(t_info *i, t_rule *r);
void						ft_char_arg_to_str(t_info *info, t_rule *rule);
void						ft_numeral_arg_to_str(t_info *i, t_rule *r);

void						ft_apply_rules_to_int(t_info *i, t_rule *r);
void						ft_apply_rules_to_unsigned_int(t_info *i,
																	t_rule *r);
void						ft_apply_rules_to_char(t_info *i, t_rule *r);

int							ft_compute_wchar(unsigned int nb, char *line,
																t_info *info);
int							ft_count_wchar(unsigned int nb);

int							ft_isconv(char c);
void						ft_base_rule(const char *s, t_info *info,
													t_rule *rule, va_list va);
char						*ft_floats_conv(t_info *info, t_rule *rule);
int							ft_get_color(t_info *i);
t_lst						*ft_newlink(t_lst **lst, int len);
void						ft_printstr(t_info *info);
void						ft_listdel(t_lst **bgn_lst, t_lst *lst);

#endif
