NAME =	libft.a

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_islower.c \
		ft_isprint.c \
		ft_ispunct.c \
		ft_isspace.c \
		ft_isupper.c \
		ft_itoa.c \
		ft_memalloc.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memdel.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putchar.c \
		ft_putendl_fd.c \
		ft_putendl.c \
		ft_putnbr_fd.c \
		ft_putnbr.c \
		ft_putstr_fd.c \
		ft_putstr.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strncat.c \
		ft_strncpy.c \
		ft_strnstr.c \
		ft_strrchr \
		ft_strstr.c \
		ft_tolower.c \
		ft_toupper.c \


OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):
		gcc -Wall -Werror -Wextra -c $(SRCS)
		ar rc $(NAME) $(OBJS)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:		fclean all

test:	$(NAME)
		gcc -Wall -Werror -Wextra -g -c $(SRCS)
		ar rc $(NAME) $(OBJS)
		gcc main.c -I. -L. -lft
