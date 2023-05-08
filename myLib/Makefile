# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 01:11:39 by ouaarabe          #+#    #+#              #
#    Updated: 2023/05/08 07:04:51 by ouaarabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c   ft_isalpha.c ft_isdigit.c ft_memcpy.c  ft_bzero.c  ft_strlcat.c ft_strlen.c  ft_strnstr.c ft_tolower.c\
ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strchr.c  ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c\
ft_memchr.c ft_memcmp.c ft_atoi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_calloc.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_split.c ft_striteri.c ft_itoa.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
ft_lstmap.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}
OBJ_B = $(BONUS:.c=.o)

RM = rm -rf

NAME = libft.a

%.o : %.c libft.h 
	@ $(CC) -c $(CFLAGS) $< -o $@

${NAME} : ${OBJS}
	@ ar -rcs $@ ${OBJS}

all : ${NAME}

clean :
	@ ${RM} ${OBJS} ${OBJ_B}

fclean : clean
	@ ${RM} ${NAME}

re : fclean all

bonus : ${NAME} ${OBJ_B}
	ar -rc $^

.PHONY : fclean clean re