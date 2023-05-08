/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 06:12:08 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/08 04:55:51 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include<stdio.h>
# include <string.h>
# include "../myLib/libft.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
// size_t	ft_strlen(char *s);
char	*ft_strjoiin(char *s1, char *s2);
char	*ft_strchrr(char *str, int c);
// char	*ft_strdup(char *s1);

#endif