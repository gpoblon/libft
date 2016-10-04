#ifndef ATESTS_H
# define ATESTS_H

# include "libtest/libtest.h"

void	test_ft_strcmp(t_test_driver *driver);
void	test_ft_atoi(t_test_driver *driver);
void	test_ft_bzero(t_test_driver *driver);

void	test_ft_isalnum(t_test_driver *driver);
void	test_ft_isalpha(t_test_driver *driver);
void	test_ft_isascii(t_test_driver *driver);
void	test_ft_isdigit(t_test_driver *driver);
void	test_ft_islower(t_test_driver *driver);
void	test_ft_isupper(t_test_driver *driver);
void	test_ft_isprint(t_test_driver *driver);
void	test_ft_ispunct(t_test_driver *driver);
void	test_ft_isspace(t_test_driver *driver);

void	test_ft_strchr(t_test_driver *driver);
void	test_ft_strrchr(t_test_driver *driver);
void	test_ft_strcmp(t_test_driver *driver);
void	test_ft_strncmp(t_test_driver *driver);
void	test_ft_strcpy(t_test_driver *driver);
void	test_ft_strncpy(t_test_driver *driver);
void	test_ft_strdup(t_test_driver *driver);
void	test_ft_strcat(t_test_driver *driver);
void	test_ft_strncat(t_test_driver *driver);
void	test_ft_strlcat(t_test_driver *driver);
void	test_ft_strlen(t_test_driver *driver);
void	test_ft_strstr(t_test_driver *driver);
void	test_ft_strnstr(t_test_driver *driver);

void	test_ft_memcpy(t_test_driver *driver);
void	test_ft_memccpy(t_test_driver *driver);
void	test_ft_memchr(t_test_driver *driver);
void	test_ft_memcmp(t_test_driver *driver);
void	test_ft_memmove(t_test_driver *driver);
void	test_ft_memset(t_test_driver *driver);

void	test_ft_tolower(t_test_driver *driver);
void	test_ft_toupper(t_test_driver *driver);

void	test_ft_memalloc(t_test_driver *driver);
void	test_ft_memdel(t_test_driver *driver);
void	test_ft_strnew(t_test_driver *driver);
void	test_ft_strdel(t_test_driver *driver);
void	test_ft_strclr(t_test_driver *driver);
void	test_ft_striter(t_test_driver *driver);
void	test_ft_striteri(t_test_driver *driver);
void	test_ft_strmap(t_test_driver *driver);
void	test_ft_strmapi(t_test_driver *driver);
void	test_ft_strequ(t_test_driver *driver);
void	test_ft_strnequ(t_test_driver *driver);
void	test_ft_strsub(t_test_driver *driver);
void	test_ft_strjoin(t_test_driver *driver);
void	test_ft_strtrim(t_test_driver *driver);
void	test_ft_strsplit(t_test_driver *driver);
void	test_ft_itoa(t_test_driver *driver);

void    test_ft_lstnew(t_test_driver *driver);
void    test_ft_lstdelone(t_test_driver *driver);
void    test_ft_lstdel(t_test_driver *driver);
void    test_ft_lstadd(t_test_driver *driver);
void    test_ft_lstiter(t_test_driver *driver);

void    test_ft_pow(t_test_driver *driver);
void    test_ft_sqrt(t_test_driver *driver);

#endif
