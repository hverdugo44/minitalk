# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 13:03:40 by hverdugo          #+#    #+#              #
#    Updated: 2024/11/27 13:49:35 by hverdugo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server
NAME_CLIENT = client

FLAGS = -Wall -Wextra -Werror
CC = cc

SRC_C = client.c
SRC_S = server.c

OBJ_C = $(SRC_C:.c=.o)
OBJ_S = $(SRC_S:.c=.o)

all:	libftcompile $(NAME) $(NAME_CLIENT)

libftcompile:
	make bonus -C libft
	cp libft/libft.a .

$(NAME): $(OBJ_S) minitalk.h Makefile libft.a
	$(CC) $(FLAGS) $(OBJ_S) libft.a -o $(NAME)

$(NAME_CLIENT): $(OBJ_C) minitalk.h Makefile libft.a
	$(CC) $(FLAGS) $(OBJ_C) libft.a -o $(NAME_CLIENT)

%.o: %.c $(INCLUDE)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	make clean -C libft
	rm -rf $(OBJ_S) $(OBJ_C)

fclean:
	make clean
	make fclean -C libft
	rm -rf $(NAME) $(NAME_CLIENT) libft.a

re:
	make fclean
	make all

.PHONY: all, clean, fclean, re
