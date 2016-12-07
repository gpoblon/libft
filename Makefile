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
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnew.c \
		ft_strnstr.c \
		ft_strsplit.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strsub.c \
		ft_strtrim.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strcdup.c \
		ft_strndup.c \
		ft_iswhitespace.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstadd.c \
		ft_lstdup.c \
		ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstcpy.c \
		ft_lstsize.c \
		ft_lstpushback.c \
		ft_exit.c \
		ft_create_map.c \
		ft_putmap.c \
		ft_mapcpy.c \
		ft_mapdup.c \
		ft_free_map.c \
		ft_strndup.c \
		ft_get_next_line.c \
		ft_lstsort.c \
		ft_lstrev.c \
		ft_strncdup.c

OBJS = $(addprefix $(OBJS_D),$(SRCS:.c=.o))

OBJS_D	=	./obj/

all: $(NAME)

$(OBJS_D)%.o:%.c
		gcc -Wall -Wextra -Werror -o $@ -c $<

$(OBJS_D):
	mkdir $(OBJS_D)

$(NAME): $(OBJS_D) $(OBJS)
		ar rc $(NAME) $(OBJS)

clean:
		rm -rf $(OBJS_D)

fclean: clean
		rm -rf $(NAME)

re:	fclean all

.PHONY: clean
