/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 03:49:40 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/11/04 03:37:49 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ln(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	char	*s;
	size_t	len;
	long	n;

	n = nb;
	len = ln(n);
	s = malloc ((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (n < 0)
	{	
		n = -n;
		s[0] = '-';
	}
	if (n == 0)
		s[0] = '0';
	while (n > 0)
	{
		s[len] = 48 + (n % 10);
		n = n / 10;
		len--;
	}
	return (s);
}
