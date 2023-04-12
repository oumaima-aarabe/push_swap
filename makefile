# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 22:08:18 by ouaarabe          #+#    #+#              #
#    Updated: 2023/04/12 03:34:13 by ouaarabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

UTILS		=	mylib/libft.a
UTILS_DIR	=	mylib

SRC	=	mandatory/instract.c\
		mandatory/instract2.c\
		mandatory/main.c\
		mandatory/parsing.c\
		mandatory/utils.c\
		mandatory/check_list.c\
		mandatory/sorting.c\

OBJ	=	mandatory/instract.o\
		mandatory/instract2.o\
		mandatory/main.o\
		mandatory/parsing.o\
		mandatory/utils.o\
		mandatory/check_list.o\
		mandatory/sorting.o\


INC		=	mandatory/push_swap.h

CC			=	gcc
CFLAGS		=	 -fsanitize=address
RM			=	rm -rf

all: $(UTILS) $(NAME)

$(NAME): $(OBJ) $(INC)
	@ $(CC) $(CFLAGS) $(UTILS) -o $@ $(OBJ)

%.o: %.c
	@ $(CC) $(CFLAGS) -c $< -o $@

$(UTILS):
	@ $(MAKE) -C $(UTILS_DIR)

clean:
	@ $(MAKE) clean -C $(UTILS_DIR)
	@ $(RM) $(OBJ)

fclean: clean
	@ $(MAKE) fclean -C $(UTILS_DIR)
	@ $(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re bonus
