# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 15:41:50 by thevaris          #+#    #+#              #
#    Updated: 2025/04/13 19:26:57 by thevaris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC= cc
FLAG= -Wall -Werror -Wextra
OBJ= $(SRC:.c=.o)
SRC=ft_split.c ft_atol.c ft_isdigit.c\
	ft_printf.c ft_putchar.c ft_putnbr_hex.c ft_putnbr.c\
    ft_putstr.c ft_putpointer.c ft_putnbr_un.c \
	

AR = ar
RCS = rcs
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(RCS) $(NAME) $(OBJ)

$(OBJ): $(SRC)
	@$(CC) $(FLAGS) -c $(SRC)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

