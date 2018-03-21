/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 17:55:32 by gpoblon           #+#    #+#             */
/*   Updated: 2018/03/21 17:39:54 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

/*
** string to int / viceversa
*/

char		*ft_itoa_base_llu(unsigned long long nb, int base);
int			ft_atoi_base(const char *nptr, int str_base);
char		*ft_itoa_base(long long nb, int base);
int			ft_atoi(const char *nptr);
double		ft_atof(const char *nptr);
char		*ft_itoa(int n);

/*
** string creation
*/

char		*ft_strcpy(char *dst, const char *src);
char		*ft_strdup(const char *s);

char		*ft_strncpy(char *dst, const char *src, size_t n);
char		*ft_strndup(const char *src, size_t n);
char		*ft_strcdup(const char *s, char c);
char		*ft_strcnew(size_t n, char c);
char		*ft_strnew(size_t size);

/*
** string manipulation
*/

char		*ft_strfsub(char const *s, unsigned int i, size_t l, int free);
char		*ft_strfjoin(char const *s1, char const *s2, int free);
char		*ft_strsub(char const *s, unsigned int start, size_t l);
char		*ft_strstr(const char *big, const char *little);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strcat(char *dst, const char *src);
char		**ft_strsplit(char const *s, char c);
char		*ft_strchr(const char *s, int c);
char		*ft_strtrim(char const *s);
char		**ft_split_whitespaces(char const *s);
char		**ft_strsplit_light(char const *s, char c);

size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strncat(char *dst, const char *src, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strrchr(const char *s, int c);

char		*ft_str_tolower(char *str);
char		*ft_str_toupper(char *str);

/*
** string informations
*/

int			ft_strcmp(const char *s1, const char *s2);
int			ft_strequ(char const *s1, char const *s2);
void		ft_striter(char *s, void (*f)(char *));
size_t		ft_strlen(const char *s);

void		ft_striteri(char *s, void (*f)(unsigned int, char *));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_strnequ(char const *s1, char const *s2, size_t n);

/*
** string deletion
*/

void		ft_strdel(char **as);
void		ft_strclr(char *s);

#endif
