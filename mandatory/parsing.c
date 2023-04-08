/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:07:48 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/08 03:27:56 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int duplicate(char **str)
{
    int i;

    i = 0;
    while (str)
    {
        while ((str + i))
        {
        if (*str == *(str + i))
                return (0);
            i++;
        }
        i = 0;
        *str++;
    }
    return (1);
}

int num_check(char **str)
{
    char *current_char;

    *current_char = *str;
    while (*str) 
    {
        while (*current_char != '\0')
         {
            if (*current_char == '+' || *current_char == '-')
            {
                current_char++;
            }
            while (ft_isdigit(*current_char))
            {
                current_char++;
            }
            if (*current_char != '\0') 
            {
                return 1;
            }
            current_char++;
        }
        str++;
    }
    return 0;
}

int	is_sorted(char **str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (ft_atoi(*str) < ft_atoi(*str + 1))
			*str++;
		else
			return (0);
	}
	return (1);
}

char **checker(int ac, char **av)
{
    int i = 1;
    char *p = NULL;
    char *tmp = NULL;
    char **splitted = NULL;     
    if (ac == 1)
        exit(0);
    p = malloc(1);
    while (i < ac)
    {
        p = ft_strjoin (p, av[i], ' ');
        free (tmp);
        tmp = p;
        i++;
    }
    splitted = ft_split(p, ' ');
    if (!duplicate(splitted) || !num_check(splitted))
    {
		ft_putendl_fd("error", 1);
        exit(1);
    }
    if (is_sorted(splitted))
    {
		ft_putendl_fd("numbers are sorted", 1);
        exit(0); 
    }
    return (splitted);
}