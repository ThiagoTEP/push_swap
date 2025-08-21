NAME = push_swap

SCR = main.c data_utils.c free_utils.c ft_lists.c \
	  operat_tiny.c operat_utils.c parser.c push.c \
	  radix.c rotate_down.c rotate_up.c swap.c

OBJ = $(SCR:.c=.o)

CFLAGS += -Wall -Werror -Wextra

LIBFT = ./libft/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@cd libft && make
	@cc $(OBJ)  $(CFLAGS) $(LIBFT) -o $(NAME)
	@echo "\n------------- COMPILATION DONE -------------\n"

clean:
	@rm -f $(OBJ)
	@make -C libft clean
	@echo "\n------------- REMOVED OBJECTS -------------\n"

fclean: clean
	@rm -f $(NAME)
	@make -C libft fclean
	@echo "\n------------- REMOVED	 EXECUTABLES -------------\n"

re: clean all

.PHONY: all clean fclean re