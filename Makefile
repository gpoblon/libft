NAME		=	libft.a

SRC			=	\
char/ft_isalnum.c\
char/ft_isalpha.c\
char/ft_isascii.c\
char/ft_isdigit.c\
char/ft_islower.c\
char/ft_isprint.c\
char/ft_ispunct.c\
char/ft_isspace.c\
char/ft_isupper.c\
char/ft_iswhitespace.c\
char/ft_tolower.c\
char/ft_toupper.c\
circular_buffer/circular_buffer_append.c \
circular_buffer/circular_buffer_clear.c \
circular_buffer/circular_buffer_fclear.c \
circular_buffer/circular_buffer_read.c \
circular_buffer/circular_buffer_set_delim.c \
circular_buffer/circular_buffer_write.c \
circular_buffer/circular_buffer_len.c \
circular_buffer/delete_circular_buffer.c \
circular_buffer/init_circular_buffer.c \
circular_buffer/search_delim.c \
err/ft_usage.c\
err/ft_exit_fd.c\
ft_gnl.c\
ft_printf/apply_conv.c\
ft_printf/apply_options.c\
ft_printf/bonus_color_base.c\
ft_printf/floats_conv.c\
ft_printf/ft_printf.c\
ft_printf/get_rules.c\
ft_printf/tools.c\
ft_printf/wide_char.c\
lst/ft_insert_lst.c\
lst/ft_lst_swap.c\
lst/ft_lstadd.c\
lst/ft_lstcpy.c\
lst/ft_lstdel.c\
lst/ft_lstdelif.c\
lst/ft_lstdel_content.c\
lst/ft_lstdelone.c\
lst/ft_lstdup.c\
lst/ft_lstiter.c\
lst/ft_lstmap.c\
lst/ft_lstnew.c\
lst/ft_lstpushback.c\
lst/ft_lstsize.c\
lst/pop.c\
lst/push.c\
lst/top.c\
math/ft_pow.c\
mem/ft_bzero.c\
mem/ft_free_ptr.c\
mem/ft_free_sstr.c\
mem/ft_memalloc.c\
mem/ft_memccpy.c\
mem/ft_memchr.c\
mem/ft_memcmp.c\
mem/ft_memcpy.c\
mem/ft_memdel.c\
mem/ft_memmove.c\
mem/ft_memset.c\
net/create_server.c\
net/create_client.c\
printing/ft_putchar.c\
printing/ft_putchar_fd.c\
printing/ft_putendl.c\
printing/ft_putendl_fd.c\
printing/ft_putnbr.c\
printing/ft_putnbr_fd.c\
printing/ft_putnstr.c\
printing/ft_putsstr.c\
printing/ft_putstr.c\
printing/ft_putstr_fd.c\
sstr/ft_sstradd.c\
sstr/ft_sstrcat.c\
sstr/ft_sstrchr.c\
sstr/ft_sstrcpy.c\
sstr/ft_sstrdel.c\
sstr/ft_sstrdup.c\
sstr/ft_sstrfree.c\
sstr/ft_sstrlen.c\
sstr/ft_sstrmerge.c\
sstr/ft_sstrprint.c\
sstr/ft_sstrprint_fd.c\
sstr/ft_sstrsort.c\
sstr/ft_sstrstr.c\
str/ft_atof.c\
str/ft_atoi.c\
str/ft_atoi_base.c\
str/ft_itoa.c\
str/ft_itoa_base.c\
str/ft_itoa_base_llu.c\
str/ft_str_tolower.c\
str/ft_str_toupper.c\
str/ft_strcat.c\
str/ft_strcdup.c\
str/ft_strchr.c\
str/ft_strclr.c\
str/ft_strcmp.c\
str/ft_strcnew.c\
str/ft_strcpy.c\
str/ft_strdel.c\
str/ft_strdup.c\
str/ft_strequ.c\
str/ft_striter.c\
str/ft_striteri.c\
str/ft_strsplit_whitespaces.c \
str/ft_strjoin.c\
str/ft_strfjoin.c\
str/ft_strlcat.c\
str/ft_strlen.c\
str/ft_strmap.c\
str/ft_strmapi.c\
str/ft_strncat.c\
str/ft_strncmp.c\
str/ft_strncpy.c\
str/ft_strndup.c\
str/ft_strnequ.c\
str/ft_strnew.c\
str/ft_strnstr.c\
str/ft_strrchr.c\
str/ft_strsplit.c\
str/ft_strstr.c\
str/ft_strsub.c\
str/ft_strfsub.c\
str/ft_strtrim.c

INC_D		=	inc/
SRC_D		=	src/
OBJ_D		=	obj/
OBJ_P		=	$(addprefix $(OBJ_D), $(SRC:.c=.o))

CC			=	clang
CFLAGS		=	-Wall -Werror -Wextra -g

all: $(NAME)

$(NAME): $(OBJ_D) $(OBJ_P)
			@ar rcs $(NAME) $(OBJ_P)
			@printf "$(OVERRIDE)$(CYAN)$(PROJECT) | $(GREEN)⌛  source to object files...\t💯 ️ done creating object files$(WHITE)\n"
			@printf "$(CYAN)$(PROJECT) | $(GREEN)🆗  static lib created from object files$(WHITE)\n"

$(OBJ_D)%.o: $(SRC_D)%.c
			@$(CC) -c $< -o $@ $(CFLAGS) -I $(INC_D)
			@printf "$(OVERRIDE)$(CYAN)$(PROJECT) | $(GREEN)⌛  source to object files... $(YELLOW)%*s$(WHITE)" $(CURSOR_R) "$<"

$(OBJ_D):
	@mkdir -p $(OBJ_D)
	@mkdir -p $(dir $(OBJ_P))
	@echo "$(CYAN)$(PROJECT) | $(GREEN)🆗  object directories created$(WHITE)"

# cosmetic rules
WHITE		=	`echo "\033[0m"`
CYAN		=	`echo "\033[36m"`
GREEN		=	`echo "\033[32m"`
RED			=	`echo "\033[31m"`
YELLOW		=	`echo "\033[33m"`
OVERRIDE	=	`echo "\r\033[K"`
CURSOR_R	=	`echo "$$(tput cols) - 37"|bc`
PROJECT		=	"LIBFT"

clean:
			@rm -rf $(OBJ_D)
			@echo "$(CYAN)$(PROJECT) | clean $(RED)❌  object files cleaned$(WHITE)"

fclean:
			@rm -rf $(NAME)
			@echo "$(CYAN)$(PROJECT) | fclean $(RED)❌  static lib ($(NAME)) cleaned$(WHITE)"
			@rm -rf $(OBJ_D)
			@echo "$(CYAN)$(PROJECT) | fclean $(RED)❌  object files cleaned$(WHITE)"

re:	fclean all
			@echo "$(CYAN)$(PROJECT) | re $(YELLOW)♻️  REBUIT$(WHITE)"

.PHONY: all clean fclean re
