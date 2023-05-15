# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 22:08:18 by ouaarabe          #+#    #+#              #
#    Updated: 2023/05/15 04:56:28 by ouaarabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_B = checker

UTILS		=	mylib/libft.a
UTILS_DIR	=	mylib

SRC	=	utils/instract.c\
		utils/instract2.c\
		utils/parsing.c\
		utils/utils.c\
		utils/check_list.c\
		utils/innstract1.c\
		mandatory/main.c\
		mandatory/sorting_lg.c\
		mandatory/sorting_sh.c\
		mandatory/testing_minimize.c\

SRC_B	=	checker.c\
			utils/instract.c\
			utils/instract2.c\
			utils/parsing.c\
			utils/utils.c\
			utils/check_list.c\
			utils/innstract1.c\
			gnl/get_next_line.c\
			gnl/get_next_line_utils.c\
	
OBJ	=	${SRC:.c=.o}

OBJ_B	=	${SRC_B:.c=.o}


INC		=	push_swap.h

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -fsanitize=address
RM			=	rm -rf

all: $(UTILS) $(NAME)

$(NAME): $(OBJ) $(INC)
	@ $(CC) $(CFLAGS) $(UTILS) -o $@ $(OBJ)

$(NAME_B): $(OBJ_B) $(INC)
	@ $(CC) $(CFLAGS) $(UTILS) -o $@ $(OBJ_B)

%.o: %.c $(INC)
	@ $(CC) $(CFLAGS) -c $< -o $@

$(UTILS):
	@ $(MAKE) -C $(UTILS_DIR)

clean:
	@ $(MAKE) clean -C $(UTILS_DIR)
	@ $(RM) $(OBJ) $(OBJ_B)

fclean: clean
	@ $(MAKE) fclean -C $(UTILS_DIR)
	@ $(RM) $(NAME) $(NAME_B)

re: fclean all

bonus: $(UTILS) $(NAME_B)

.PHONY: clean fclean re bonus
