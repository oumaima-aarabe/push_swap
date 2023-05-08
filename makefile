# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 22:08:18 by ouaarabe          #+#    #+#              #
#    Updated: 2023/05/07 05:35:16 by ouaarabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_B = checker

UTILS		=	mylib/libft.a
UTILS_DIR	=	mylib

SRC	=	mandatory/instract.c\
		mandatory/instract2.c\
		mandatory/main.c\
		mandatory/parsing.c\
		mandatory/utils.c\
		mandatory/check_list.c\
		mandatory/sorting_lg.c\
		mandatory/sorting_sh.c\
		mandatory/innstract1.c\

SRC_B	=	bonus/instract.c\
			bonus/instract2.c\
			bonus/checker.c\
			bonus/parsing.c\
			bonus/utils.c\
			bonus/innstract1.c\
			gnl/get_next_line.c\
			gnl/get_next_line_utils.c\
	
OBJ	=	${SRC:.c=.o}

OBJ_B	=	${SRC_B:.c=.o}


INC		=	mandatory/push_swap.h

INC_B	=	bonus/push_swap_bonus.h\
			# get_next_line.h\

CC			=	cc
CFLAGS		=	-Wall -Wextra  -g
# -werror
# CFLAGS		=	-fsanitize=address
RM			=	rm -rf

all: $(UTILS) $(NAME)

$(NAME): $(OBJ) $(INC)
	@ $(CC) $(CFLAGS) $(UTILS) -o $@ $(OBJ)

$(NAME_B): $(OBJ_B) $(INC_B)
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
