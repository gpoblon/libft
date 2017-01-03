NAME	=	libftprintf.a

SRC		=	ft_printf.c \
			get_rules.c \
			apply_conv.c \
			apply_options.c \
			wide_char.c \
			bonus_color_base.c \
			floats_conv.c \
			tools.c

OBJ		=	$(SRC:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

all: $(NAME)

LIBFT_OBJS = $(addprefix ../libft/, $(shell make -C libft list))

$(NAME): $(OBJ)
		make -C libft
		ar rcs $(NAME) $(OBJ) $(LIBFT_OBJS)

clean:
		rm -f $(OBJ)
		make -C ../libft clean

fclean:	clean
		rm -f $(NAME)
		make -C ../libft fclean

re:		fclean all

.PHONY: all clean fclean re
