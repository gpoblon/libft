NAME	=	libft.a

SRC_LIB	=	ft_atoi.c \
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
			ft_get_next_line.c \
			ft_strcnew.c \
			ft_itoa_base.c \
			ft_itoa_base_llu.c \
			ft_str_tolower.c \
			ft_str_toupper.c \
			ft_subfree.c \
			ft_joinfree.c \
			ft_putnstr.c \
			ft_pow.c \

SRC_PF	=	ft_printf/ft_printf.c \
			ft_printf/get_rules.c \
			ft_printf/apply_conv.c \
			ft_printf/apply_options.c \
			ft_printf/wide_char.c \
			ft_printf/bonus_color_base.c \
			ft_printf/floats_conv.c \
			ft_printf/tools.c

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

OBJDIR	=	obj
OBJDIR2	=	obj/ft_printf
OBJ_LIB	=	$(addprefix obj/,$(SRC_LIB:.c=.o))
OBJ_PF	=	$(addprefix obj/,$(SRC_PF:.c=.o))

$(OBJDIR)/%.o: %.c
			@mkdir $(OBJDIR) 2> /dev/null || true
			@mkdir $(OBJDIR2) 2> /dev/null || true
			$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ_LIB) $(OBJ_PF)
			ar rcs $(NAME) $(OBJ_LIB) $(OBJ_PF)

clean:
			rm -rf $(OBJDIR)

fclean: clean
			rm -rf $(NAME)

re:	fclean all

list:
			@echo $(OBJDIR) 2> /dev/null || true

.PHONY: all clean fclean re
