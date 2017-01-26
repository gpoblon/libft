/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 11:52:37 by gpoblon           #+#    #+#             */
/*   Updated: 2017/01/26 18:41:11 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <inttypes.h>
# include <limits.h>
# include <stdarg.h>
# include <wchar.h>
# include <stdio.h>
# include "ft_printf/ftprintf.h"

# define TRUE 1
# define FALSE 0

# define BUFF_SIZE 1

# define CHECKPV(p) if (!p) return;
# define CHECKPVN(p) if (!p) return (NULL);
# define CHECKPV0(p) if (!p) return (0);

# define NO_FREE	1 << 0
# define FREE_P1	1 << 1
# define FREE_P2	1 << 2
# define FREE_ALL	1 << 3

# define MSK0		1 << 0
# define MSK1		1 << 1
# define MSK2		1 << 2
# define MSK3		1 << 3
# define MSK4		1 << 4
# define MSK5		1 << 5
# define MSK6		1 << 6
# define MSK7		1 << 7
# define MSK8		1 << 8
# define MSK9		1 << 9

typedef unsigned char	t_uchar;

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

void					*ft_memset(void *s, int c, size_t n);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t len);
void					*ft_memccpy(void *dst, const void *src, int c,
						size_t len);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);

size_t					ft_strlen(const char *s);
char					*ft_strdup(const char *s);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strncpy(char *dst, const char *src, size_t n);
char					*ft_strcat(char *dst, const char *src);
char					*ft_strncat(char *dst, const char *src, size_t n);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *big, const char *little);
char					*ft_strnstr(const char *big, const char *little,
									size_t len);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);

char					*ft_strnew(size_t size);
void					ft_strdel(char **as);
void					ft_strclr(char *s);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s, char (*f)(unsigned int,
									char));
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_subfree(char const *s, unsigned int start,
														size_t l, int free_p);
char					*ft_joinfree(char const *s1, char const *s2, int free);
char					*ft_strsub(char const *s, unsigned int start, size_t l);
char					*ft_strjoin(char const *s1, char const *s2);

char					*ft_strtrim(char const *s);
char					**ft_strsplit(char const *s, char c);
char					*ft_str_tolower(char *str);
char					*ft_str_toupper(char *str);

int						ft_atoi(const char *nptr);
int						ft_atoi_base(const char *nptr, int str_base);
double					ft_atof(const char *nptr);
char					*ft_itoa(int n);
char					*ft_itoa_base(long long nb, int base);
char					*ft_itoa_base_llu(unsigned long long nb, int base);

int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);

int						ft_isupper(int c);
int						ft_islower(int c);
int						ft_isspace(int c);
int						ft_ispunct(int c);

int						ft_toupper(int c);
int						ft_tolower(int c);

void					ft_putchar(char c);
void					ft_putstr(char const *s);
void					ft_putnstr(char const *s, int n);
void					ft_putendl(char const *s);
void					ft_putnbr(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr_fd(int n, int fd);

void					ft_lstadd(t_list **alst, t_list *new);
t_list					*ft_lstdup(t_list *list);
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstdelone(t_list **alst, void (*del)(void *,
						size_t));
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstpushback(t_list **begin_list, t_list *elem);
size_t					ft_lstsize(t_list *list);
char					*ft_strcdup(const char *s, char c);
char					*ft_strndup(const char *src, size_t n);
char					*ft_strcnew(size_t n, char c);
int						ft_iswhitespace(int c);
void					ft_exit_fd(const char *message, int fd);

char					**ft_create_map(char **map, int x, int y, char c);
void					ft_putmap(char **map);
void					ft_mapcpy(char **dst, const char **src);
char					**ft_mapdup(char **map);
void					ft_free_map(char **map);

unsigned long long		ft_pow(unsigned long long n, unsigned long long pow);
int						get_next_line(const int fd, char **line);

#endif
