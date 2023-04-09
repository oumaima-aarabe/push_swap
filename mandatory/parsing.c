/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:07:48 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/09 01:26:43 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int duplicate(char **strr)
{
    int i;
    int j;
    char **str;
    
    str = strr;
    i = 1;
    while (*str && **str)
    {
        while (*(str + i) && **(str + i))
        {
            if (**(str) == **(str + i))
                    return (1);
            i++;
        }
        i = 1;
        (*str)++;
    }
    return (0);
}

int num_check(char **strr)
{
    char **str;
    char *current_char;

    str = strr;
    current_char = *str;
    printf("%s\n", current_char);
    while (*str) 
    {
        while (*current_char != '\0')
         {
            if (*current_char == '+' || *current_char == '-')
            {
                current_char++;
            }
            // printf ("[UPPP]\n");
            while (ft_isdigit(*current_char))
            {   
                current_char++;
            }
            if (*current_char != '\0') 
            {
                return 0;
            }
            current_char++;
        }
        str++;
    }
    return 1;
}

int	is_sorted(char **str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (ft_atoi(*str) < ft_atoi(*str + 1))
			(*str)++;
		else
			return (0);
	}
	return (1);
}

char **checker(int ac, char **av)
{
    int i = 1;
    char *p;
    char *tmp = NULL;
    char **splitted = NULL;     
    if (ac == 1)
        exit(0);
    p = ft_strdup("");
    while (i < ac)
    {
        p = ft_strjoin(p, av[i], ' ');
        free (tmp);
        tmp = p;
        i++;
    }
    splitted = ft_split(p, ' ');
    if (!splitted)
        return (NULL);
    if (duplicate(splitted) || num_check(splitted))
    {
		ft_putendl_fd("error", 1);
        exit(1);
    }
    return (splitted);
    // while (splitted && *splitted)
    // {
    //     printf("[%s]\n", *splitted++);
    // }
    // if (is_sorted(splitted))
    // {
	// 	ft_putendl_fd("numbers are sorted", 1);
    //     exit(0); 
    // }
}