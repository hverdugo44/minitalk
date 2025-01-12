# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/03 15:11:10 by hverdugo          #+#    #+#              #
#    Updated: 2025/01/08 23:17:00 by hverdugo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


files = ft_split.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c  ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

bonus = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

flags = -Wall -Wextra -Werror

OFILES = $(files:.c=.o)

OBONUS = $(bonus:.c=.o)

BONUS_NAME = .bonus

LIB = libft.h

NAME = libft.a

all: $(NAME)

$(NAME):$(OFILES) $(LIB) Makefile
	ar crs $(NAME) $(OFILES)

bonus : $(BONUS_NAME)

$(BONUS_NAME):$(OFILES) $(OBONUS) $(LIB)
	ar crs $(NAME) $(OBONUS) $(OFILES)
	touch $(BONUS_NAME)

%.o: %.c
	cc $(flags) -c $< -o $@

clean:
	@echo "Borrando O-Files"
	@rm -rf $(OFILES) $(OBONUS)

fclean:
	@echo "Borrando todo"
	@rm -rf $(NAME) $(OFILES) $(OBONUS)

re: 
	fclean all

.PHONY: all, clean, fclean, re, bonus
