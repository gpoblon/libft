NAME =	libft.a

SRCS =	str/ft_strlen.c \
		str/ft_strdup.c \
		str/ft_strcpy.c \
		str/ft_strncpy.c \
		str/ft_strcat.c \
		str/ft_strncat.c \
		str/ft_strlcat.c \
		str/ft_strchr.c
		str/ft_strrchr.c \
		str/ft_strstr.c \
		str/ft_strnstr.c \
		str/ft_strcmp.c \
		str/ft_strncmp.c \

		str/ft_strnew.c \
		str/ft_strdel.c \
		str/ft_strclr.c \
		str/ft_striter.c \
		str/ft_striteri.c \
		str/ft_strmap.c \
		str/ft_strmapi.c \
		str/ft_strequ.c \
		str/ft_strnequ.c \
		str/ft_strsub.c \
		str/ft_strjoin.c \
		str/ft_strtrim.c \
		str/ft_strsplit.c \

		mem/ft_memset.c \
		mem/ft_memcpy.c \
		mem/ft_memccpy.c \
		mem/ft_memmove.c \
		mem/ft_memchr.c \
		mem/ft_memcmp.c \
		mem/ft_mem.c \

		mem/ft_memalloc.c \
		mem/ft_memdel.c \

		put/ft_putchar.c \
		put/ft_putstr.c \
		put/ft_putendl.c \
		put/ft_putnbr.c \
		put/ft_putchar_fd.c \
		put/ft_putstr_fd.c \
		put/ft_putendl_fd.c \
		put/ft_putnbr_fd.c \

		/ft_bzero.c \
		/ft_atoi.c \
		/ft_isalpha.c \
		/ft_isdigit.c \
		/ft_isalnum.c \
		/ft_isascii.c \
		/ft_isprint.c \
		/ft_toupper.c \
		/ft_tolower.c \

		/ft_itoa.c \

		lst/ft_lstnew.c \
		lst/ft_lstdelone.c \
		lst/ft_lstdel.c \
		lst/ft_lstadd.c \
		lst/ft_lstiter.c \
		lst/ft_lstmap.c \
		lst/ft_lst.c \

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):
		gcc -Wall -Werror - Wextra -c $(SRCS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:		fclean all
