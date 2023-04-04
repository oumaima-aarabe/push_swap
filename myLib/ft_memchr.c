/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:31:54 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/11/11 10:54:01 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*dep;

	dep = s;
	while (n--)
	{
		if (*(dep) == (unsigned char)c)
			return ((void *)dep);
		dep++;
	}
	return (NULL);
}
