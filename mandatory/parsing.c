/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:07:48 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/03/29 22:27:24 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int checker(int ac, char **av)
{
    int i = 1;
    char *p = NULL;
    char *tmp = NULL;
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
    if (!dup(av) || !num_check(av))
    {
        write(2, "Error\n", 6);
        exit(1);
    }
    return 0;
}

int dup(char **str)
{
    while (str)
    {
       if (*str == *(str + 1))
            return (0);
        *str++;
    }
    return (1);
}

int num_check(char **str)
{
    while (str)
    {
        if (!(*str >= '0' &&  *str <= '9'))
            return (0);
        *str++;
    }
    return (1);
} 