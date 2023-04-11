/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:07:48 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/11 02:56:29 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int duplicate(char **str)
{
	int i;
	int j;
	
	i = 0;
	j = 1;
	while (str[i])
	{
		while (str[i + j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[i + j]))
					return (1);
			j++;
		}
		j = 1;
	   i++;
	}
	return (0);
}

int num_check(char **str)
{
	int i = 0;
	int j = 0;

	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] && !j && (str[i][j] == '+' || str[i][j] == '-'))
				j++;
			if (str[i][j] && !ft_isdigit(str[i][j]))
				return(1);
			j++;
		}
		i++;
	}
	return 0;
}

int is_sorted(char **str)
{
	int prev_num;
	
	prev_num = ft_atoi(*str++);
	while(*str)
	{
		 if (ft_atoi(*str++) < prev_num)
		 return (0);
		 prev_num = ft_atoi(*(str - 1));
	}
	return (1);
}

char **checker(int ac, char **av)
{
	int i = 1;
	char *p;
	char *tmp = NULL;
	char **splitted = NULL;     
	if (ac < 2)
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
		ft_putendl_fd("yaaaaa weld l9ehba", 1);
		exit(1);
	}
	if (is_sorted(splitted))
	{
		ft_putendl_fd("numbers are sorted", 1);
		exit(0); 
	}
	else
	return (splitted);
}