/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 05:01:53 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/26 21:19:54 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	check_im(long result)
{
	if (result > 2147483647 || result < -2147483648)
	{
		write (2, "Error\n", 6);
		exit (0);
	}
}

int	ft_atoi(const char *str)
{
	long	nbr;
	int		sign;
	int		i;

	sign = 1;
	nbr = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] > 7 && str[i] < 14))
			i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	check_im(sign * nbr);
	return (sign * nbr);
}
