/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 05:01:53 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/10/30 01:10:49 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

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
	return (sign * nbr);
}
